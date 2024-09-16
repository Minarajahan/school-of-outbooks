#include <iostream>
using namespace std;

long long digitSum(int N) {
    long long totalSum = 0;
    long long factor = 1;
    while (factor <= N) {
        int lowerNumbers = N - (N / factor) * factor;
        int currentDigit = (N / factor) % 10;
        int higherNumbers = N / (factor * 10);

        totalSum += higherNumbers * factor * 45;
        totalSum += (currentDigit * (currentDigit - 1) / 2) * factor;
        totalSum += (lowerNumbers + 1) * currentDigit;

        factor *= 10;
    }

    return totalSum;
}

int main() {
    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N;
        cin >> N;
        cout << "Case " << caseNum << ": " << digitSum(N) << endl;
    }
    return 0;
}
