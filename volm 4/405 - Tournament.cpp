#include <iostream>
using namespace std;

int main() {
    int age;
    while (cin >> age) {
        if (age < 20) {
            cout << "junior" << endl;
        } else {
            cout << "senior" << endl;
        }
    }
    return 0;
}
