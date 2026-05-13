class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i: nums){
            mp.insert(i);
        }
        if(mp.size()<nums.size()) return true;
        return false;
    }
};