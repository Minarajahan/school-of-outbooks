#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        unsigned long long A, B;
        cin >> A >> B;

        cout << (A & B) << endl;
    }

    return 0;
}
