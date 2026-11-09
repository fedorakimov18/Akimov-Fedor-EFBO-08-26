// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №11, задача 2
#include <iostream>
#include <algorithm>
using namespace std;

int a[1000];
int n, d;

int countDays(int x) {
    int days = 1, first = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] - first > x) {
            days++;
            first = a[i];
        }
    }
    return days;
}

int main() {
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    int l = 0, r = a[n - 1] - a[0];
    while (l < r) {
        int mid = (l + r) / 2;
        if (countDays(mid) <= d)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << endl;
    return 0;
}
