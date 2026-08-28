class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        vector<int> store;
        vector<bool> doomed(n, false);

        for(int i=0; i<n; i++){
            if(s[i]=='(')store.push_back(i);

            else if(s[i]==')'){
                if(!store.empty())store.pop_back();
                else
                doomed[i]=true;
            }
        }

        for(auto index: store){
            doomed[index]=true;
        }

        string res;

        for(int i=0; i<n; i++){
            if(!doomed[i])res+=s[i];
        }

        return res;
        
    }
};
