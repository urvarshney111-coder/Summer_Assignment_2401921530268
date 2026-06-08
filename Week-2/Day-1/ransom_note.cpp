#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> m1, m2;
    for(auto i: ransomNote){
        m1[i]++;
    }
    for(auto i: magazine){
        m2[i]++;
    }
    if(m1.size() > m2.size()) return false;
    for(auto it: m1){
        if(!m2.count(it.first)){
            return false;
        }
        else{
            if(it.second > m2[it.first]){
                return false;
            }
        }
    }
    return true;
}
    
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(canConstruct(s1, s2)) cout << "true";
    else cout << "false";
}