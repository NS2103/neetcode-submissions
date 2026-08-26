class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if (n > m) return false;

        int l= 0, r = n - 1;
        unordered_map<char, int> count1;
        unordered_map<char, int> count2;
        for (int i = 0; i < n; i++) {
            count1[s1[i]]++;
            count2[s2[i]]++;
        }
        while (r < s2.size()) {
            if (count1 != count2) {
                if(--count2[s2[l]]==0)count2.erase(s2[l]);
                l++;
                r++;
                if(r<m)count2[s2[r]]++;
            }

            else {
                return true;
            }
        }

        return false;
    }
};
