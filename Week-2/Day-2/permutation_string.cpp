#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int freq[26] = {};
        for (char c : s1) freq[c - 'a']++;
        for (char c : s2.substr(0, s1.size())) freq[c - 'a']--;

        auto allZero = [&]() {
            for (int f : freq) if (f != 0) return false;
            return true;
        };

        if (allZero()) return true;

        for (int i = s1.size(); i < s2.size(); i++) {
            freq[s2[i] - 'a']--;
            freq[s2[i - s1.size()] - 'a']++;
            if (allZero()) return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    string s1, s2;
    cout << "Enter s1: ";
    cin >> s1;
    cout << "Enter s2: ";
    cin >> s2;
    cout << (sol.checkInclusion(s1, s2) ? "true" : "false") << endl;
    return 0;
}