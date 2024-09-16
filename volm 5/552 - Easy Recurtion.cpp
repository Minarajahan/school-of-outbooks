// Compilation error

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix multiply(Matrix A, Matrix B) {
    int size = A.size();
    Matrix C(size, vector<long long>(size, 0));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % 1000000007;
            }
        }
    }
    return C;
}

Matrix power(Matrix M, long long p) {
    int size = M.size();
    Matrix result(size, vector<long long>(size, 0));
    for (int i = 0; i < size; ++i) result[i][i] = 1;
    
    while (p) {
        if (p % 2) result = multiply(result, M);
        M = multiply(M, M);
        p /= 2;
    }
    return result;
}

long long fibonacci(long long n) {
    if (n == 1) return 1;
    Matrix M = {{1, 1}, {1, 0}};
    M = power(M, n - 1);
    return M[0][0];
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N;
        cin >> N;
        cout << fibonacci(N) << endl;
    }
    
    return 0;
}
