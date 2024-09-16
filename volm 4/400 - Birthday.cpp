#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int birthday = (N + M + 1) % 30;
    if (birthday == 0) {
        birthday = 30;
    }
    cout << birthday << endl;
    return 0;
}
