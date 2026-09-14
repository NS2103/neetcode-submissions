class Solution {
   public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int total = 0;
        int res = INT_MAX;
        while (r < n) {
            total += nums[r];
            while (total>= target) {
                res = min(res, (r - l + 1));
                total -= nums[l];
                l++;
            }
            r++;
        }
        return (res==INT_MAX)?0:res;
    }
};
