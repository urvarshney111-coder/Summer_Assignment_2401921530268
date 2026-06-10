#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string trimmed = doubled.substr(1, doubled.size() - 2);
        return trimmed.find(s) != string::npos;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << (sol.repeatedSubstringPattern(s) ? "true" : "false") << endl;
    return 0;
}