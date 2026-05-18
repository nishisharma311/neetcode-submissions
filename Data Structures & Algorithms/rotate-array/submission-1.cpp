class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            tmp[(k+i)%nums.size()] = nums[i];
        }
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = tmp[i];
        }
    }
};