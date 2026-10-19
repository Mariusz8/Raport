📂 File Checker — C++

Program do porównywania zawartości dwóch plików tekstowych napisany w C++.

Projekt umożliwia wczytanie danych z dwóch plików, porównanie ich zawartości i zapisanie wyników do trzech oddzielnych plików.

✨ Funkcjonalności
📄 Wczytywanie danych z dwóch plików tekstowych.
📦 Przechowywanie danych w tablicach (vector) oraz listach (list).
🔍 Wyszukiwanie elementów wspólnych dla obu plików.
➖ Wykrywanie elementów występujących tylko w pierwszym pliku.
➕ Wykrywanie elementów występujących tylko w drugim pliku.
💾 Zapisywanie wyników do trzech plików wyjściowych.
🧩 Podział programu na metody w ramach klasy checker.
🛠️ Technologie
Język: C++
Biblioteki: <iostream>, <fstream>, <string>, <vector>, <list>, <algorithm>
Standard: C++11 lub nowszy
📁 Struktura projektu
File-Checker/
├── main.cpp
├── w1.txt
├── w2.txt
├── wspolne.txt
├── tylko_w1.txt
├── tylko_w2.txt
└── README.md

⚙️ Jak działa program?
Wczytuje zawartość pliku w1.txt.
Wczytuje zawartość pliku w2.txt.
Porównuje elementy obu plików.
Wyszukuje elementy wspólne oraz unikalne dla każdego pliku.
Zapisuje wyniki do odpowiednich plików.
🧪 Przykład działania

Plik w1.txt

kot
pies
dom
las


Plik w2.txt

pies
dom
woda
kwiat

📄 Wyniki

wspolne.txt — elementy wspólne

pies
dom


tylko_w1.txt — elementy wyłącznie z pierwszego pliku

kot
las


tylko_w2.txt — elementy wyłącznie z drugiego pliku

woda
kwiat

🚀 Kompilacja i uruchomienie

Upewnij się, że masz zainstalowany kompilator C++, np. GCC.

1. Skompiluj program:

g++ -std=c++11 main.cpp -o checker


2. Uruchom program:

Linux / macOS:

./checker


Windows:

checker.exe


Pliki wejściowe w1.txt i w2.txt powinny znajdować się w katalogu roboczym programu.

🧱 Struktura kodu

Program wykorzystuje klasę checker, która dzieli działanie na osobne metody:

Metoda	Opis
wczytajPlik()	Wczytuje dane z pliku
istnieje()	Sprawdza obecność elementu na liście
porownaj()	Porównuje zawartość obu plików
zapiszPlik()	Zapisuje wyniki do pliku
wykonaj()	Uruchamia cały proces
📌 Uwagi
Każda linia pliku jest traktowana jako osobny element.
Wyniki nie zawierają powtarzających się elementów.
Program rozróżnia wielkość liter, np. Kot i kot są traktowane jako różne elementy.
Pliki wynikowe są tworzone lub nadpisywane podczas uruchomienia programu.
🎯 Cel projektu

Celem projektu jest praktyczne wykorzystanie operacji na plikach tekstowych, kontenerów STL oraz programowania obiektowego w języku C++.

Autor: [Twoje imię lub nick na GitHubie]
