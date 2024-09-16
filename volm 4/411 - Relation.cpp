#include <iostream>
using namespace std;

int main() {
    int M, N;
    while (cin >> M >> N) {
        if (M < N) {
            cout << M << " < " << N << endl;
        } else if (M > N) {
            cout << M << " > " << N << endl;
        } else {
            cout << M << " = " << N << endl;
        }
    }
    return 0;
}
