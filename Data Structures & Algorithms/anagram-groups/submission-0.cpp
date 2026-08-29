class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> res;

        for(const auto & str: strs){
            vector<int> hashArr(26,0);
            for(char c: str)hashArr[c-'a']++;

            string hashStr;
            for(auto a: hashArr)hashStr+=a;

            res[hashStr].push_back(str);

        }
        vector<vector<string>>result;
        for(auto& pair: res){
           result.push_back(pair.second);
        }
        return result;
        
    }
};
