// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №8, задача 3
// Ханойская башня: n ингредиентов с салфетки 1 на салфетку 3
#include <iostream>
using namespace std;

void move(int n, int from, int to, int via) {
    if (n == 0)
        return;
    move(n - 1, from, via, to);
    cout << "Ingredient " << n << " move from " << from << " to " << to << "\n";
    move(n - 1, via, to, from);
}

int main() {
    int n;
    cin >> n;
    move(n, 1, 3, 2);
    return 0;
}
