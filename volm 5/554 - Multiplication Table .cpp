#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int caseNumber = 1;
    int x, n;

    while (cin >> x >> n) {
        if (caseNumber > 1) {
            cout << endl;
        }
        cout << "Case " << caseNumber << ":" << endl;
        for (int i = 1; i <= n; ++i) {
            cout << x << " X " << i << " = " << x * i << endl;
        }
        if (n == 0) {
            cout << x << " X " << n << " = " << x * n << endl;
        }
        ++caseNumber;
    }

    return 0;
}
