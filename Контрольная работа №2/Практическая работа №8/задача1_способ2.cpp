// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №8, задача 1, способ 2
// Быстрое возведение в степень циклом по двоичной записи n
#include <iostream>
using namespace std;

long long power(long long a, int n) {
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1)
            res *= a;
        n /= 2;
        if (n > 0)
            a *= a;
    }
    return res;
}

int main() {
    long long a;
    int n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}
