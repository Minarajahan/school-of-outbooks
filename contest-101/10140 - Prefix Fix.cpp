#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<int> computeLPSArray(const string& s) {
    int n = s.length();
    vector<int> lps(n, 0);
    int len = 0; 
    int i = 1;
    
    while (i < n) {
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    
    return lps;
}

int main() {
    string s;
    
    while (getline(cin, s)) {
        int n = s.length();
        vector<int> lps = computeLPSArray(s);
        int longestPrefixSuffixLength = lps[n - 1];
        
        if (longestPrefixSuffixLength > 0) {
            cout << s.substr(0, longestPrefixSuffixLength) << endl;
        } else {
            cout << "Fix" << endl;
        }
    }
    
    return 0;
}
