// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №5, вариант 3, задача 3
// Цикл do-while: do { ... } while (i < n)

#include <iostream>

using namespace std;

int main() {
    int n, i = 0, x, len = 0;
    int row[1000];

    cin >> n;
    if (n > 0) {
        do {
            cin >> x;
            if (len > 0 && row[len - 1] == x)
                len--;
            else
                row[len++] = x;
            i++;
        } while (i < n);
    }

    cout << "Количество студентов, которые уйдут в КФС: " << n - len << endl;

    return 0;
}
