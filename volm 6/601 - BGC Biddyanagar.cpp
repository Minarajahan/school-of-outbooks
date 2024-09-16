#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        vector<int> ages(N);
        for (int j = 0; j < N; ++j) {
            cin >> ages[j];
        }
        sort(ages.begin(), ages.end());
        for (int j = 0; j < N; ++j) {
            if (j > 0) cout << " ";
            cout << ages[j];
        }
        cout << endl;
    }
    return 0;
}
