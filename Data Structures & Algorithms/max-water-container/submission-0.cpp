class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=0;

        int left=0;
        int right=heights.size()-1;

        while(left<right){
            int area=(right-left)*min(heights[left], heights[right]);
            maxArea=max(area, maxArea);

            if(heights[left]>heights[right])right--;
            else
            left++;
  
        }

        return maxArea;
        
    }
};
