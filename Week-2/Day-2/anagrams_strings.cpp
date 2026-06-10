#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (p.size() > s.size()) return result;

        int freq[26] = {};
        for (char c : p) freq[c - 'a']++;
        for (char c : s.substr(0, p.size())) freq[c - 'a']--;

        auto allZero = [&]() {
            for (int f : freq) if (f != 0) return false;
            return true;
        };

        if (allZero()) result.push_back(0);

        for (int i = p.size(); i < s.size(); i++) {
            freq[s[i] - 'a']--;
            freq[s[i - p.size()] - 'a']++;
            if (allZero()) result.push_back(i - p.size() + 1);
        }
        return result;
    }
};

int main() {
    Solution sol;
    string s, p;
    cout << "Enter s: ";
    cin >> s;
    cout << "Enter p: ";
    cin >> p;

    vector<int> ans = sol.findAnagrams(s, p);
    if (ans.empty()) {
        cout << "No anagrams found." << endl;
    } else {
        cout << "Anagram start indices: ";
        for (int idx : ans) cout << idx << " ";
        cout << endl;
    }
    return 0;
}