class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), currSum = 0, res = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;
        for(auto n:nums) {
            currSum += n;
            int diff = currSum - k;
            res += prefixSum[diff];
            prefixSum[currSum]++;
        }
        return res;
    }
};