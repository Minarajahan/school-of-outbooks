// Compilation error

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isPalindrome(const string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

bool canFormPalindrome(const string &s) {
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    
    int oddCount = 0;
    for (const auto &entry : charCount) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

int main() {
    string line;
    int caseNumber = 1;
    
    while (getline(cin, line)) {
        bool palindrome = isPalindrome(line);
        bool canForm = canFormPalindrome(line);
        
        if (palindrome || canForm) {
            cout << "Case #" << caseNumber << ": Yes" << endl;
        } else {
            cout << "Case #" << caseNumber << ": No" << endl;
        }
        
        caseNumber++;
    }
    
    return 0;
}
