#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int pin;
    int sum = 0;
    cout << "Добро пожаловать в ПлюсПлюсБанк! Введите пин код : "; cin >> pin;

    while (pin != 0) {
        sum += pin % 10;
        pin /= 10;
        if (sum == 42) {
            cout << "Пароль верный!"; break;
        }
    }
    if (sum != 42) {
        cout << "Пароль неверный!";
    }


}