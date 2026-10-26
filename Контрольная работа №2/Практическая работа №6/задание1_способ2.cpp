// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №6, задание 1, способ 2
// Без проверки клеток: в строке i сначала n - 1 - i нулей, потом 1, потом i двоек
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - 1 - i; k++)
            cout << "0 ";
        cout << 1;
        for (int k = 0; k < i; k++)
            cout << " 2";
        cout << endl;
    }
    return 0;
}
