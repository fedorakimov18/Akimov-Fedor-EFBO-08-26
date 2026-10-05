// Акимов Фёдор ЭФБО-08-26
// Контрольная работа №1, задание 3, вариант 1
// 9(7x - 6) - 18x = 63x - 54 - 18x = 45x - 54

#include <iostream>

using namespace std;

double calculateExpression(double x) {
    return 45 * x - 54;
}

int main() {
    double x;

    // ввод x
    cout << "Enter x: ";
    cin >> x;

    // вычисление и вывод ответа
    double result = calculateExpression(x);
    cout << "9(7x - 6) - 18x = " << result << endl;

    return 0;
}
