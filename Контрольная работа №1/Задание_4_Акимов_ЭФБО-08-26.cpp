// Акимов Фёдор ЭФБО-08-26
// Контрольная работа №1, задание 4, вариант 1

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// символ A: фамилия и имя
void printName() {
    cout << "Akimov Fedor" << endl;
}

// вывод одного корня, чтобы не печаталось -0
void printRoot(string name, double x) {
    if (x == 0) {
        x = 0;
    }
    cout << name << " = " << x << endl;
}

// символ t: корни многочлена ax^2 + bx + c
void printRoots(double a, double b, double c) {
    // a = 0, многочлен не квадратный
    if (a == 0) {
        if (b == 0 && c == 0) {
            cout << "x is any real number" << endl;
        } else if (b == 0) {
            cout << "No roots" << endl;
        } else {
            printRoot("x", -c / b);
        }
        return;
    }

    // a != 0, решаем через дискриминант
    double d = b * b - 4 * a * c;

    if (d > 0) {
        printRoot("x1", (-b + sqrt(d)) / (2 * a));
        printRoot("x2", (-b - sqrt(d)) / (2 * a));
    } else if (d == 0) {
        printRoot("x", -b / (2 * a));
    } else {
        cout << "No real roots" << endl;
    }
}

// символ c: проверка возраста для покупки алкоголя
void checkAge() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Wrong age" << endl;
    } else if (age >= 18) {
        cout << "You can buy alcohol" << endl;
    } else {
        cout << "You can't buy alcohol" << endl;
    }
}

int main() {
    double a, b, c;
    char symbol;

    // ввод коэффициентов и символа
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter symbol: ";
    cin >> symbol;

    // выбор действия по символу
    if (symbol == 'A') {
        printName();
    } else if (symbol == 't') {
        printRoots(a, b, c);
    } else if (symbol == 'c') {
        checkAge();
    } else {
        cout << "Unknown symbol" << endl;
    }

    return 0;
}
