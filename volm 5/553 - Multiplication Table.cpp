#include <iostream>

using namespace std;

int main() {
    int caseNumber = 1;
    int x;

    while (cin >> x) {
        if (caseNumber > 1) {
            cout << endl;
        }
        cout << "Case " << caseNumber << ":" << endl;
        for (int i = 1; i <= 10; ++i) {
            cout << x << " X " << i << " = " << x * i << endl;
        }
        ++caseNumber;
    }

    return 0;
}
