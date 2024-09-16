#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << abs(a - b) << endl;
    }
    return 0;
}
