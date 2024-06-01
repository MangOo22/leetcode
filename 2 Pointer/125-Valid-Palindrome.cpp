class Solution {
private: 
    string converter(string s) {
        string temp{};
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i]) or isdigit(s[i])) {
                temp += char(tolower(s[i]));
            }
        }
        return temp;
    }
    bool palindromeCheck(string t) {
        string temp = t;
        reverse(temp.begin(), temp.end());
        return (t == temp ? true : false);
    }
public:
    bool isPalindrome(string s) {
        string temp = converter(s);
        bool ans = palindromeCheck(temp);
        return ans;
    }
};