class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // iterate each element
        vector<vector<string>> result;
        unordered_map<string,vector<string>> hash;
        for(string i: strs){
            string s=i;
            sort(i.begin(),i.end());
            hash[i].push_back(s);

        }
        for(auto a: hash){
            result.push_back(a.second);
        }
        return result;
    }
};
