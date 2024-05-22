class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            missing ^= (i ^ nums[i]);
        }  
        return missing ^ n;
    }
};