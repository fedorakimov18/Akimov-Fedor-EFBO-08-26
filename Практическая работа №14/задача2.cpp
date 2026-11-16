// Акимов Фёдор, ЭФБО-08-26
#include <iostream>
#include <string>
#include <set>
#include <locale>
#include <cstdlib>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    locale language("en_US.UTF-8");
    set<wstring> words;
    string input;
    while (getline(cin, input)) {
        wstring line(input.size(), L'\0');
        size_t length = mbstowcs(line.data(), input.c_str(), line.size());
        if (length == size_t(-1))
            continue;
        line.resize(length);
        wstring word;
        for (size_t i = 0; i <= line.size(); i++) {
            if (i < line.size() && isalpha(line[i], language)) {
                word += tolower(line[i], language);
            } else if (i < line.size() && line[i] == L'-' &&
                       !word.empty() && i + 1 < line.size() &&
                       isalpha(line[i + 1], language)) {
                word += L'-';
            } else if (!word.empty()) {
                if (words.insert(word).second) {
                    string output(word.size() * MB_CUR_MAX, '\0');
                    output.resize(wcstombs(output.data(), word.c_str(), output.size()));
                    cout << output << endl;
                }
                word.clear();
            }
        }
    }
    return 0;
}
