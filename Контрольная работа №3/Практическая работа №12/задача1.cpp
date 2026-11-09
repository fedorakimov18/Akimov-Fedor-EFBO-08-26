// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №12, задача 1
#include <iostream>
using namespace std;

int n, m;
char a[20][20];
bool used[20][20];
int best = -1;

void go(int i, int j, int cnt) {
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;
    if (a[i][j] == '1' || used[i][j])
        return;
    if (a[i][j] == 'P')
        cnt++;
    if (a[i][j] == 'E') {
        if (cnt > best)
            best = cnt;
        return;
    }
    used[i][j] = true;
    go(i + 1, j, cnt);
    go(i - 1, j, cnt);
    go(i, j + 1, cnt);
    go(i, j - 1, cnt);
    used[i][j] = false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    go(0, 0, 0);
    cout << best << endl;
    return 0;
}
