class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for(int i=0;i<nums.size();i++){
            if(a.empty()) a.insert(nums[i]);
            else if(a.find(nums[i])!=a.end()) return true;
            a.insert(nums[i]); 
        }
        return false;
    }
};