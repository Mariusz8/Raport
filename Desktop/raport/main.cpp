
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class checker
{
private:
    vector<string> tablica1;
    vector<string> tablica2;

    list<string> lista1;
    list<string> lista2;

    list<string> wspolne;
    list<string> tylkoW1;
    list<string> tylkoW2;

public:
    // Wczytywanie pliku do tablicy i listy
    void wczytajPlik(string nazwa, vector<string>& tablica,
                     list<string>& lista)
    {
        ifstream plik(nazwa);

        if (!plik.is_open())
        {
            cout << "Nie mozna otworzyc pliku: "
                 << nazwa << endl;
            return;
        }

        string tekst;

        while (getline(plik, tekst))
        {
            tablica.push_back(tekst);
            lista.push_back(tekst);
        }

        plik.close();
    }

    // Sprawdzanie, czy element znajduje sie na liscie
    bool istnieje(const list<string>& lista, string tekst)
    {
        return find(lista.begin(), lista.end(), tekst)
               != lista.end();
    }

    // Porownywanie zawartosci obu plikow
    void porownaj()
    {
        for (const string& tekst : lista1)
        {
            if (istnieje(lista2, tekst))
            {
                if (!istnieje(wspolne, tekst))
                    wspolne.push_back(tekst);
            }
            else
            {
                if (!istnieje(tylkoW1, tekst))
                    tylkoW1.push_back(tekst);
            }
        }

        for (const string& tekst : lista2)
        {
            if (!istnieje(lista1, tekst))
            {
                if (!istnieje(tylkoW2, tekst))
                    tylkoW2.push_back(tekst);
            }
        }
    }

    // Zapis wynikow do pliku
    void zapiszPlik(string nazwa, const list<string>& lista)
    {
        ofstream plik(nazwa);

        if (!plik.is_open())
        {
            cout << "Nie mozna zapisac pliku: "
                 << nazwa << endl;
            return;
        }

        for (const string& tekst : lista)
        {
            plik << tekst << endl;
        }

        plik.close();
    }

    // Uruchomienie calego porownania
    void wykonaj()
    {
        wczytajPlik("w1.txt", tablica1, lista1);
        wczytajPlik("w2.txt", tablica2, lista2);

        porownaj();

        zapiszPlik("wspolne.txt", wspolne);
        zapiszPlik("tylko_w1.txt", tylkoW1);
        zapiszPlik("tylko_w2.txt", tylkoW2);

        cout << "Porownanie zakonczone." << endl;
        cout << "Wyniki zapisano w 3 plikach." << endl;
    }
};

int main()
{
    checker obiekt;
    obiekt.wykonaj();

    return 0;
}
