class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if (n > m) return false;

        int l= 0, r = n;
        vector<int> count1(26,0);
        vector<int> count2(26,0);
 
        for (int i = 0; i < n; i++) {
            count1[s1[i]-'a']++;
            count2[s2[i]-'a']++;
        }


        int matches=0;
        for(int i=0; i<26; i++){
            if(count1[i]==count2[i])matches++;
        }
        while (r < s2.size()) {
            if(matches==26)return true;

            count2[s2[l]-'a']--;
            if(count1[s2[l]-'a']==count2[s2[l]-'a'])matches++;
            else if(count1[s2[l]-'a']==count2[s2[l]-'a']+1)matches--;

            count2[s2[r]-'a']++;
            if(count1[s2[r]-'a']==count2[s2[r]-'a'])matches++;
            else if(count1[s2[r]-'a']==count2[s2[r]-'a']-1)matches--;

            r++;
            l++;

           
        }

        return matches==26;
    }
};
