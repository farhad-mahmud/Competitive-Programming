class Solution {
public:
    bool isPalindrome(string str) {
        string s = ""; 

        for (int i = 0; i < str.length(); i++) {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    s += (char)tolower(str[i]);
                } else {
                    s += str[i];
                }
            }
        }

        int i = 0, j = s.length() - 1;
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }

        return true;
    }
};