class Solution {
public:
int rec(int i, int end, vector<int> &nums, vector<int>& memo){
    if(i>=end)return 0;
    
    if(memo[i]!=-1)return memo[i];

    return memo[i]=max(rec(i+1, end, nums, memo), nums[i]+rec(i+2, end, nums, memo));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        
        vector<int>memo1(n, -1);
        vector<int>memo2(n,-1);

        int skipFirst=rec(1, n, nums, memo1);
        int skipLast=rec(0, n-1, nums, memo2);

        return max(skipFirst, skipLast);
        
    }
};
