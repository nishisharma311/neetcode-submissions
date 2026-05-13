class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mp.count(diff)) {
                ans.push_back(mp[diff]);
                ans.push_back(i);
            }
            mp.insert({nums[i], i});
        }
        return ans;
    }
};
