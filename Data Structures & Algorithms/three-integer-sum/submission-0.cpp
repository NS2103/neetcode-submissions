class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if(i>0 && nums[i]==nums[i-1])continue;
            int l = i + 1;
            int r = nums.size() - 1;
            int reqSum = 0 - (nums[i]);
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == reqSum) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while(l<r && nums[l]==nums[l+1])l++;
                    while(l<r && nums[r]==nums[r-1])r--;
                    }

                if (sum > reqSum) r--;
                else
                l++;
            }
        }
        return ans;
    }
};
