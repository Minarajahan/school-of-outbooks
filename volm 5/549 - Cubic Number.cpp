#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; ++case_num) {
        unsigned long long N;
        cin >> N;
        unsigned long long count = 0;
        for (unsigned long long i = 1; i * i * i <= N; ++i) {
            if (i * i * i <= N) {
                ++count;
            }
        }
        cout << "Case " << case_num << ": " << count << endl;
    }
    return 0;
}
