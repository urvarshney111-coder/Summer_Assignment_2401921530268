#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

string decodeString(string s) {
    stack<pair<string, int>> st;
    string curr = "";
    int num = 0;

    for (char ch : s) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
        }
        else if (ch == '[') {
            st.push({curr, num});
            curr = "";
            num = 0;
        }
        else if (ch == ']') {
            pair<string, int> temp = st.top();
            st.pop();

            string prev = temp.first;
            int repeat = temp.second;

            string repeated = "";
            for (int i = 0; i < repeat; i++) {
                repeated += curr;
            }

            curr = prev + repeated;
        }
        else {
            curr += ch;
        }
    }

    return curr;
}

int main() {
    string s;

    cout << "Enter encoded string: ";
    cin >> s;

    cout << "Decoded string: " << decodeString(s) << endl;

    return 0;
}
    