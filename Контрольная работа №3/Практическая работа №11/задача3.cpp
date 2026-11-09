// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №11, задача 3
#include <iostream>
#include <algorithm>
using namespace std;

int a[100];

int main() {
    int n, k, l;
    cin >> n >> k >> l;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n * l < k) {
        cout << -1 << endl;
        return 0;
    }

    sort(a, a + n);
    int sum = 0, taken = 0;
    for (int i = n - 1; i >= 0 && taken < k; i--) {
        for (int t = 0; t < l && taken < k; t++) {
            sum += a[i];
            taken++;
        }
    }
    cout << sum << endl;
    return 0;
}
