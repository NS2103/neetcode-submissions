class Solution {
   public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxLen = 0, maxf = 0;
        unordered_map<char, int> alphamap;
        while (r < s.size()) {
            alphamap[s[r]]++;
            maxf = max(maxf, alphamap[s[r]]);

            int change = (r - l + 1) - maxf;

            if (change <= k) {
                maxLen = max(maxLen, r - l + 1);
            } else {
                alphamap[s[l]]--;
                l++;
            }
            r++;
        }

        return maxLen;
    }
};
