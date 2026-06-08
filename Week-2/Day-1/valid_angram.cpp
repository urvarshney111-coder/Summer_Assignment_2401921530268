#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;
    string s1;
    string s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()) cout << "false";
    else{
        for(auto i: s1){
            m1[i]++;
        }
        for(int i=0;i<s2.size();i++){
            m2[s2[i]]++;
        }
        if(m1 == m2) cout << "true";
        else cout << "false";
    }
}