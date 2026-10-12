// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №5, вариант 3, задача 3
// Цикл for с объявлением переменной в заголовке и несколькими командами
// через запятую в третьем блоке, тело цикла пустое

#include <iostream>

using namespace std;

int main() {
    int n, x, len = 0;
    int row[1000];

    cin >> n;
    for (int i = 0; i < n; i++, cin >> x, len > 0 && row[len - 1] == x ? len-- : row[len++] = x);

    cout << n - len << endl;

    return 0;
}
