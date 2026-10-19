// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №6, задание 2
// Карта грибов как в сапёре

#include <iostream>

using namespace std;

int main() {
    int n, m, w, x, y;
    // 1 - гриб, 0 - пусто. Поле с запасом по краям, чтобы не выходить за границы
    int mush[34][34] = {0};

    cin >> n >> m >> w;
    for (int k = 0; k < w; k++) {
        cin >> x >> y;
        mush[x][y] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mush[i][j] == 1) {
                cout << "*";
            } else {
                // считаем грибы в 8 соседних клетках
                int count = 0;
                for (int a = i - 1; a <= i + 1; a++)
                    for (int b = j - 1; b <= j + 1; b++)
                        count += mush[a][b];
                cout << count;
            }

            if (j < m)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
