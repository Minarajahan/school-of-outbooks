#include <iostream>
using namespace std;

int main() {
    int X;
    while (cin >> X) {
       
        int daughter_age = X / 5;
        int father_age = 4 * daughter_age;
        cout << father_age << " " << daughter_age << endl;
    }
    return 0;
}
