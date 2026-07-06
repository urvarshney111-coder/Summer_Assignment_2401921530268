#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int index = 0;   // Position to write compressed characters
    int i = 0;       // Position to read characters

    while (i < n) {
        char current = chars[i];
        int count = 0;

        // Count consecutive occurrences
        while (i < n && chars[i] == current) {
            count++;
            i++;
        }

        // Write the character
        chars[index++] = current;

        // Write the count if greater than 1
        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) {
                chars[index++] = c;
            }
        }
    }

    return index;
}

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> chars(n);

    cout << "Enter characters:\n";
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    int len = compress(chars);

    cout << "Compressed array: ";
    for (int i = 0; i < len; i++) {
        cout << chars[i] << " ";
    }

    cout << "\nNew Length = " << len << endl;

    return 0;
}