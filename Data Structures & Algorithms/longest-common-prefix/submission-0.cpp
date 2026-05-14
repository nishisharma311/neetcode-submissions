class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        sort(strs.begin(), strs.end());
        string ans;
        int n = strs[0].length(), m = strs[strs.size()-1].length();
        int i = 0;
        while(n and m) {
            if(strs[0][i] == strs[strs.size()-1][i]) {
                ans.push_back(strs[0][i]);
            }
            else return ans;
            i++;n--;m--;
        } 
        return ans;
    }
};