// count_if.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool mniejszeNiz5(int liczba) {
    return liczba < 5;
};

struct mniejszeNiz3 {

    bool operator()(int liczba) {
        return liczba < 3;
    }
};

auto lambda9 = [](int liczba) {return liczba < 9; };


int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8,9,11 };
    
    int t[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };

    int* wsk_begin, * wsk_end;
    wsk_begin = t;
    wsk_end = &t[10]; //koniec wektora to indeks za ostatnim elementem (dlatego [10] a nie [9]

    mniejszeNiz3 obiekt;

    cout << "Funkcja vector liczba<5: " << count_if(v.begin(), v.end(), mniejszeNiz5) << endl;
    cout << "Struktura vector liczba<3: " << count_if(v.begin(), v.end(), obiekt) << endl;
    cout << "Lambda vector liczba<9: " << count_if(v.begin(), v.end(), lambda9) << endl;

    cout << "\nFunkcja tablica liczba<5: " << count_if(wsk_begin, wsk_end, mniejszeNiz5) << endl;
    cout << "Struktura tablica liczba<3: " << count_if(wsk_begin, wsk_end, obiekt) << endl;
    cout << "Lambda tablica liczba<9: " << count_if(wsk_begin, wsk_end, lambda9) << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
