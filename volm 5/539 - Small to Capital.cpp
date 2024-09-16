// Gave compilation error

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int case_num = 1; case_num <= T; ++case_num) {
        string line;
        getline(cin, line);

        for (char &ch : line) {
            ch = toupper(ch);
        }

        cout << "Case " << case_num << ": " << line << endl;
    }

    return 0;
}
