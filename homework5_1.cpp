#include <iostream>
#include <Windows.h>
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 0;
    int y = 0;

    int operation = 0;

    cout << "Введите первое число: ";
    cin >> x;
    cout << endl << "Введите второе число: ";
    cin >> y;
    cout << endl << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> operation;

    cout << endl;

    switch (operation)
    {
    case 1:
        cout << x << " + " << y << " = " << addition(x, y);
        break;
    case 2:
        cout << x << " - " << y << " = " << diff(x, y);
        break;
    case 3:
        cout << x << " * " << y << " = " << multipl(x, y);
        break;
    case 4:
        cout << x << " : " << y << " = " << division(x, y);
        break;
    case 5:
        cout << x << " в степени " << y << " = " << degree(x, y);
        break;
    default:
        return 0;
    }

    return 0;
}