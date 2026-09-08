class Solution {
private:
void dfs(const vector<int> & nums, int i, int sum, vector<int>&subset, vector<vector<int>>&res){
    if(i>=nums.size()||sum<0)return;
    if(sum==0){
        res.push_back(subset);
        return;
    }

    subset.push_back(nums[i]);
    dfs(nums, i,sum-nums[i], subset, res);
    subset.pop_back();
    dfs(nums, i+1,sum, subset, res);
}     
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>subset;
        dfs(nums, 0, target, subset, res);
        return res;
    }
};
