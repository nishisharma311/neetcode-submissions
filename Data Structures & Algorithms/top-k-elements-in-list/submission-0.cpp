class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        priority_queue<pair<int, int>> pq;
        int count = 1;
        vector<int> ans;
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] == nums[i+1]) {
                count++;
            }
            else {
                cout<<count<<endl;
                pq.push({count, nums[i]});
                count = 1;
            }
        }
        pq.push({count, nums[nums.size()-1]});
        while(k) {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
