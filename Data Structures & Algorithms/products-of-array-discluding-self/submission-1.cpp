class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zeroCount = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) prod *= nums[i];
            if(nums[i] == 0) zeroCount++;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(zeroCount > 1) nums[i] = 0;
            else if(nums[i]!= 0 and zeroCount == 1) nums[i] = 0;
            else if(nums[i] == 0) nums[i] = prod;
            else nums[i] = prod/nums[i];
        }
        return nums;
    }
};
