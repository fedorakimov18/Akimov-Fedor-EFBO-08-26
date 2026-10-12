// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №5, вариант 3, задача 3
// Цикл while: while (i < n)

#include <iostream>

using namespace std;

int main() {
    int n, i = 0, x, len = 0;
    int row[1000];

    cin >> n;
    while (i < n) {
        cin >> x;
        if (len > 0 && row[len - 1] == x)
            len--;
        else
            row[len++] = x;
        i++;
    }

    cout << n - len << endl;

    return 0;
}
