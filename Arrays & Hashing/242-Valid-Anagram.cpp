class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ss,st;
        for (char &i : s) ss[i]++;
        for (char &i : t) st[i]++;
        if (ss.size() != st.size()) return false;
        for (int i = 0; i < s.size(); i++) {
            if (ss[s[i]] != st[s[i]]) return false; 
        }
        return true;
    }
};