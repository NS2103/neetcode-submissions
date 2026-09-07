class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last=INT_MIN;
        int count=0;
        int length=0;
        for(int i=0; i<nums.size(); i++){
            int val=nums[i];
            if(val==last)continue;
            if(val-1==last){
              count++;
              last=val;
            }
            else{
                last=val;
                count=1;
            }
        length=max(length, count);
            
        }

        return length;
        
    }
};
