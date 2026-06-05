#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (char c : s) {
        cout << c;
    }
    cout << endl;
}