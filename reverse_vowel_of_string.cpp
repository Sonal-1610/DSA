#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isvowel(char &c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return 1;
        }
        return 0;
    }

    string reverseVowels(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (!isvowel(s[i])) {
                i++;
            }
            else if (!isvowel(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};

int main() {
    Solution obj;
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "After reversing vowels: " << obj.reverseVowels(str) << endl;
    return 0;
}
