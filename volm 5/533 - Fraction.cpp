// gave compilation error

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        size_t slashPos1 = line.find('/');
        size_t slashPos2 = line.find('/', slashPos1 + 1);
        
        int x1 = stoi(line.substr(0, slashPos1));
        int x2 = stoi(line.substr(slashPos1 + 1, slashPos2 - slashPos1 - 1));
        int y1 = stoi(line.substr(slashPos2 + 1, line.find(' ', slashPos2) - slashPos2 - 1));
        int y2 = stoi(line.substr(line.find(' ', slashPos2) + 1));
        
        long long lhs = static_cast<long long>(x1) * y2;
        long long rhs = static_cast<long long>(y1) * x2;
        
        if (lhs > rhs) {
            cout << x1 << "/" << x2 << " > " << y1 << "/" << y2 << endl;
        } else if (lhs < rhs) {
            cout << x1 << "/" << x2 << " < " << y1 << "/" << y2 << endl;
        } else {
            cout << x1 << "/" << x2 << " = " << y1 << "/" << y2 << endl;
        }
    }
    return 0;
}