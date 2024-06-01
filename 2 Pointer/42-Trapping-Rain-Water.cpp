class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int ans = 0;
        int leftmax = height[l], rightmax = height[r];
        while(l < r) {
            if (height[l] < height[r]) {
                leftmax = max(height[l], leftmax);
                ans += leftmax - height[l];
                l++;
            } else {
                rightmax = max(height[r], rightmax);
                ans += rightmax - height[r];
                r--;
            }
        }
        return ans;
    }
};