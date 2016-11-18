#include <iostream>
#include <math.h>
#include "Calculator.hpp"

using namespace std;

int main () {
    float a, b, d;
    int c;
    cout << "Введите три любых числа: ";
    cin >> a >> b >> d;
    cout << "Введите еще одно число(целое): ";
    cin >> c;
    cout << "Сумма а и b = " << summary (a,b) << endl;
    cout << "Разность a и b = " << subtraction (a,b) << endl;
    cout << "Произведение a и b = " << multiplication (a,b) << endl;
    if (b != 0) {
        cout << "Частное a и b = " << division (a,b) << endl;
    }
    else {
        cout << "Ошибка. На 0 делить нельзя\n";
    }
    cout << "a в степени с = " << involution (a,c) << endl;
    cout << "Квадратный корень из числа a = " << square_root (a) << endl;
    cout << "Абсолютное значение d = " << absolute (d) << endl;
}
