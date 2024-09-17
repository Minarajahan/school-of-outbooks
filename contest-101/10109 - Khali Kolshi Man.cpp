#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int amount;
    while (cin >> amount) {
        double actualMoney = amount / 4.0;
        cout << fixed << setprecision(2) << actualMoney << endl;
    }
    return 0;
}
