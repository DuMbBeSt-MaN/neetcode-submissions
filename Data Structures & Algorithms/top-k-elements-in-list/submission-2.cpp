class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(int a:nums){
            hash[a]++;
        }
        vector<vector<int>> count(nums.size());
        for(auto& a: hash){
            count[a.second-1].push_back(a.first);
        }
        vector<int> result;
        for(int i=count.size()-1;i>=0&&k>0;i--){
            for(int n:count[i]){
                result.push_back(n);
                k--;
            }
        }
        return result;
    }
};
