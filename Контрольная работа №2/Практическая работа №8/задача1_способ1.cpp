// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №8, задача 1, способ 1
// Быстрое возведение в степень рекурсией: a^n = (a^(n/2))^2, при нечётном n ещё * a
#include <iostream>
using namespace std;

long long power(long long a, int n) {
    if (n == 0)
        return 1;
    long long half = power(a, n / 2);
    if (n % 2 == 0)
        return half * half;
    return half * half * a;
}

int main() {
    long long a;
    int n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}
