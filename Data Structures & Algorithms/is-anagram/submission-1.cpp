class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())return false;

        vector<int> store1(26,0);
        vector<int> store2(26,0);

        for(int i=0; i<s.size(); i++){
            store1[s[i]-'a']++;
            store2[t[i]-'a']++;
        }
        return store1==store2;
    }
};
