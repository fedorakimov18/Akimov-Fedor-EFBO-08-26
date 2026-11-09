// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №11, задача 1
#include <iostream>
using namespace std;

int a[100][100], dp[100][100];
int pathI[200], pathJ[200];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0)
                dp[i][j] = a[i][j];
            else if (i == 0)
                dp[i][j] = dp[i][j - 1] + a[i][j];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }

    int i = n - 1, j = m - 1, k = 0;
    while (true) {
        pathI[k] = i;
        pathJ[k] = j;
        k++;
        if (i == 0 && j == 0)
            break;
        if (i == 0)
            j--;
        else if (j == 0)
            i--;
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    for (int t = k - 1; t >= 0; t--)
        cout << pathI[t] << " " << pathJ[t] << endl;
    return 0;
}
