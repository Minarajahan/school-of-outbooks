#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < n - i; ++j) {
                cout << " ";
            }
            for (int j = 0; j < i; ++j) {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
