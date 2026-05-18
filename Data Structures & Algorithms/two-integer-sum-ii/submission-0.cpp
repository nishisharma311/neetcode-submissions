class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i = 0; i < numbers.size(); i++) {
            int diff = target - numbers[i];
            if(mp.count(diff)) {
                ans.push_back(mp[diff]);
                ans.push_back(i+1);
            }
            mp[numbers[i]] =  i+1;
        }
        return ans;
    }
};
