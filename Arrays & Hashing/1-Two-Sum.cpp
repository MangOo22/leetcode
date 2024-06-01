class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};
