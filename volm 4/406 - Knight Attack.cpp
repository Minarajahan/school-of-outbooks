#include <iostream>
using namespace std;

int main() {
    int K1, K2, A1, A2;
    while (cin >> K1 >> K2 >> A1 >> A2) {
        
        int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
        int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};
        
        bool attacked = false;
        
        for (int i = 0; i < 8; ++i) {
            int newX = K1 + dx[i];
            int newY = K2 + dy[i];
            
            if (newX == A1 && newY == A2) {
                attacked = true;
                break;
            }
        }
        
        if (attacked) {
            cout << "A is attacked by K." << endl;
        } else {
            cout << "A is not attacked by K." << endl;
        }
    }
    return 0;
}
