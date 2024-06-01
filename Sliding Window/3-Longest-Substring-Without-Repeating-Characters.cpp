class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> frq;
        int n = s.size();
        int l = 0, r = 1, ans = 0;
        frq[s[0] - 'a'] = 1;
        while(l < n) {
            while(r < n and frq[s[r] - 'a'] == 0) {
                frq[s[r++] - 'a']++;
            }
            ans = max(ans, r - l);
            frq[s[l++] - 'a']--;
        }
        return ans;
    }
};