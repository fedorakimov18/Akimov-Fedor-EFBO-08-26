// Акимов Фёдор, ЭФБО-08-26
// Практическая работа №6, задание 3
// Последовательность "смотри и говори": следующий член описывает предыдущий

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int n;

    cin >> s >> n;
    for (int k = 1; k < n; k++) {
        string next = "";
        int len = s.size();
        int count = 0;

        for (int i = 0; i < len; i++) {
            count++;
            // цифра закончилась: записываем сколько их было и саму цифру
            if (i == len - 1 || s[i] != s[i + 1]) {
                next += to_string(count);
                next += s[i];
                count = 0;
            }
        }
        s = next;
    }

    cout << s << endl;

    return 0;
}
