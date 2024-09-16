// compi;ation error/


#include <iostream>
#include <string>

using namespace std;

int romanToInt(const string& s) {
    int total = 0;
    int prevValue = 0;
    
    for (char c : s) {
        int value = 0;
        
        switch (c) {
            case 'I': value = 1; break;
            case 'V': value = 5; break;
            case 'X': value = 10; break;
            case 'L': value = 50; break;
            case 'C': value = 100; break;
            case 'D': value = 500; break;
            case 'M': value = 1000; break;
        }
        
        if (value > prevValue) {
            total += value - 2 * prevValue;
        } else {
            total += value;
        }
        prevValue = value;
    }
    
    return total;
}

int main() {
    int T;
    cin >> T;
    
    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        string roman;
        cin >> roman;
        
        int integerValue = romanToInt(roman);
        cout << "Case " << caseNum << ": " << integerValue << endl;
    }
    
    return 0;
}
