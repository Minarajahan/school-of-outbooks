#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        string n;
        cin >> n;

        string maxNumber = n;
        int len = n.size();

        for (int i = 0; i < len; ++i) {
            for (int j = i + 1; j < len; ++j) {
                swap(n[i], n[j]);
                maxNumber = max(maxNumber, n);
                swap(n[i], n[j]);  
            }
        }

        cout << maxNumber << endl;
    }

    return 0;
}
