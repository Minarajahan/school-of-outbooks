#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

string createSmallestPalindrome(const string &s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    vector<char> oddChars;
    string half;
    char middleChar = '\0';

    for (auto &entry : freq) {
        if (entry.second % 2 != 0) {
            oddChars.push_back(entry.first);
        }
        half.append(entry.second / 2, entry.first);
    }

    if (oddChars.size() > 1) {
        return "No Such Palindrome";
    }

    if (oddChars.size() == 1) {
        middleChar = oddChars[0];
    }

    string firstHalf = half;
    reverse(firstHalf.begin(), firstHalf.end());
    
    return half + (middleChar != '\0' ? string(1, middleChar) : "") + firstHalf;
}

int main() {
    string line;
    int caseNumber = 1;

    while (getline(cin, line)) {
        string result = createSmallestPalindrome(line);
        cout << "Case #" << caseNumber << ": " << result << endl;
        caseNumber++;
    }

    return 0;
}
