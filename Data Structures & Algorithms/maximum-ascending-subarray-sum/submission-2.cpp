class Solution {
   public:
    int maxAscendingSum(vector<int>& nums) {
        int res = nums[0];
        int curSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1]>= nums[i]) {
                // reset
                curSum = nums[i];
            }

            else curSum += nums[i];
            res = max(res, curSum);
        }
        return res;
    }
};