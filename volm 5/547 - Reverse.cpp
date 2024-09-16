// compilation error
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        reverse(line.begin(), line.end());
        cout << line << endl;
    }
    return 0;
}
