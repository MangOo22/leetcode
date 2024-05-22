class Solution {
private:
    int countOnes(int n) {
        int cnt = 0;
        while(n) {
            cnt += (n % 2);
            n /= 2;
        }
        return cnt;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            ans[i] = countOnes(i);
        }
        return ans;
    }
};