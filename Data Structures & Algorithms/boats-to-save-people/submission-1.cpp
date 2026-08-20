class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());
        int minboat=people.size();
        int left=0;
        int right=people.size()-1;

        while(left<right){
            int w=people[left]+people[right];
            while(left<right && w>limit){
                w-=people[right];
                right--;
                w+=people[right];
            }
            if(w<=limit)minboat--;
            left++;
            right--;
        }
        return minboat;
    }
};