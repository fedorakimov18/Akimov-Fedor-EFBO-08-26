// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №8, задача 2
// НОД рекурсией по алгоритму Евклида
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
