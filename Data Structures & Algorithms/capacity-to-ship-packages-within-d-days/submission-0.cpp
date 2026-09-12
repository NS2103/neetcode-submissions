class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int res= *max_element(weights.begin(), weights.end());
         
        while(true){
            int cur=0;
            int count=1;
            for(auto w:weights){
                if(cur+w>res){
                    count++;
                    cur=0;
                    cur+=w;
                }
                else{
                    cur+=w;
                }

            }
            if(count<=days)return res;
            res++;
            }
        }
        
    
};