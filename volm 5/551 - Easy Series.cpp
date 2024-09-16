#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int case_num = 1; case_num <= T; ++case_num) {
        long long N;
        cin >> N;
        
        long long sum;
        if (N % 2 == 0) {
            sum = N / 2;
        } else {
            sum = -((N + 1) / 2);
        }
        
        cout << "Case " << case_num << ": " << sum << endl;
    }
    
    return 0;
}
