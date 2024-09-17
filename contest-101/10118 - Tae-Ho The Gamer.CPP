#include <iostream>
using namespace std;

int main() {
    int caseNum = 1;
    int E, M, H;
    
    while (cin >> E >> M >> H) {
        int totalHours = E * 1 + M * 2 + H * 3;
        cout << "Case " << caseNum << ": Tae-Ho takes " << totalHours << " hours to complete the game" << endl;
        caseNum++;
    }
    
    return 0;
}
