#include <iostream>
#include <Windows.h>
#include "Greeter.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter greet;
    string name;
    cout << "¬ведите им€: ";
    cin >> name;
    cout << greet.greet(name);
    system("pause");
}
