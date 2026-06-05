#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()){
        return "";
    }
    string pre = strs[0];
    int len = pre.size();
    for(int i=1;i<strs.size();i++){
        string s = strs[i];
        while(len > s.size() || pre != s.substr(0,len)){
            len--;
            if(len == 0){
                return "";
            }
            pre = pre.substr(0,len);
        }
    }
    return pre;
}

int main(){
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the strings: ";
    for(int i=0;i<n;i++){
        cin >> strs[i];
    }
    cout << endl;
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
}