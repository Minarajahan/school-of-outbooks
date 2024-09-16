#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        string a, b;
        cin >> a >> b;

        if (a.length() > b.length()) {
            cout << "a is bigger than b" << endl;
        } else if (a.length() < b.length()) {
            cout << "b is bigger than a" << endl;
        } else {
            if (a > b) {
                cout << "a is bigger than b" << endl;
            } else if (a < b) {
                cout << "b is bigger than a" << endl;
            } else {
                cout << "They are equal" << endl;
            }
        }
    }
    
    return 0;
}
