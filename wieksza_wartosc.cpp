// Zadeklaruj trzy zmienne typu int a, b i c.
//Niech liczby a i b poda u�ytkownik, a do liczby c przypisz warto�� wi�kszej liczby.
//Np. Je�eli uzytkownik poda 12 i 46, do liczby c powinna zosta� przypisana warto�� 46. Uwaga: deklaracja i przypisanie warto�ci do zmiennej c musz� si� odby� w pojedynczej linijce.

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Choose and type in two numbers" << endl;
    cin >> a >> b;

    int int_max = (a > b ? a : b);

    cout << "Maximum value: " << int_max << endl;

    return 0;
}
