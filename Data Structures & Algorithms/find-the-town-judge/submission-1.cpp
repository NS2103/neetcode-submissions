class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> trustother(n+1,0);
        vector<int> trustedby(n+1,0);

        for(auto t:trust){
            int p1=t[0];
            int p2=t[1];

            trustother[p1]++;
            trustedby[p2]++;
        }
        for(int i=1; i<=n; i++){
            if(trustedby[i]==n-1 && trustother[i]==0)return i;
        }

        return -1;
        
    }
};