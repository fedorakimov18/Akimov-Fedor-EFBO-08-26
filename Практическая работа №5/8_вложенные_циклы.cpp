// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №5, вариант 3, задача 3
// Вложенные циклы: while повторяет проходы, пока есть пара, внутри for ищет
// пару соседей, а ещё один for сдвигает хвост массива на её место

#include <iostream>

using namespace std;

int main() {
    int n, m, i, j;
    int a[1000];
    bool found = true;

    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];

    m = n;
    while (found) {
        found = false;
        for (i = 0; i + 1 < m; i++) {
            if (a[i] == a[i + 1]) {
                for (j = i; j + 2 < m; j++)
                    a[j] = a[j + 2];
                m -= 2;
                found = true;
                break;
            }
        }
    }

    cout << n - m << endl;

    return 0;
}
