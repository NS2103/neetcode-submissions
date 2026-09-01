class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int> temp(n,0);

        for(int i=0; i<n; i++){
            int index= (i+k)%n;
            temp[index]=nums[i];
        }
        for(int j=0; j<n; j++){
            nums[j]=temp[j];
        }
        
    }
};