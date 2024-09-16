// compilation error
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getIndex(const string& name) {
    if (name == "Moni") return 0;
    if (name == "Rasel") return 1;
    if (name == "Touhid") return 2;
    if (name == "Ullash") return 3;
    return -1;
}

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        int n;
        cin >> n;

        vector<vector<long long>> matrix(4, vector<long long>(4, 0));

        for (int i = 0; i < n; ++i) {
            long long M, R, T, U;
            string S;
            cin >> M >> R >> T >> U >> S;

            int payer = getIndex(S);
            if (payer == -1) continue;

            vector<long long> bills = {M, R, T, U};
            for (int j = 0; j < 4; ++j) {
                if (j != payer) {
                    matrix[payer][j] += bills[j];
                }
            }
        }

        cout << "Case " << case_num << ":\n";
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}