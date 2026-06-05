#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
        if (tolower(s[i]) == tolower(s[j]) && isalnum(s[i]) &&
            isalnum(s[j])) {
            i++;
            j--;
        } else if (!isalnum(s[i])) {
            i++;
        } else if (!isalnum(s[j])) {
            j--;
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if(isPalindrome(s)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}