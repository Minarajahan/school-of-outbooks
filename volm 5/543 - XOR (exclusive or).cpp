#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        unsigned int result = 0;
        for (int i = 0; i < N; ++i) {
            unsigned int num;
            cin >> num;
            result ^= num;
        }

        cout << result << endl;
    }

    return 0;
}
