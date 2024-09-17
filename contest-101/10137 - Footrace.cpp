#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int totalP = 0, totalM = 0;

    for (int i = 1; i <= N; ++i) {
        int p, m;
        cin >> p >> m;

        totalP += p;
        totalM += m;

        if (totalP > totalM) {
            cout << "Measurement " << i << ": P ahead by " << (totalP - totalM) << "\n";
        } else if (totalM > totalP) {
            cout << "Measurement " << i << ": M ahead by " << (totalM - totalP) << "\n";
        } else {
            cout << "Measurement " << i << ": Even\n";
        }
    }

    return 0;
}
