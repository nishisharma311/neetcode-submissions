class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> tmp;
        unordered_set<int> s;
        for(int i=0; i<nums.size();i++) {
            if(nums[i] >= 0 and s.count(nums[i]) == 0) tmp.push_back(nums[i]); 
            s.insert(nums[i]);
        }
        if(tmp.size() == 0) return 1;
        sort(tmp.begin(), tmp.end());
        if(tmp[0] > 1) return 1;
        
        for(int i=0; i<tmp.size()-1; i++) {
            if(tmp[i] + 1 != tmp[i+1]) return tmp[i]+1;
            else continue;
        }
        return tmp[tmp.size()-1]+1;
    }
};