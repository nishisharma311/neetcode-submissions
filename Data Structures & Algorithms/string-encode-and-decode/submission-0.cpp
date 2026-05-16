class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        string res = "";
        for(auto s: strs) {
            res += to_string(s.size()) + ',';
        }
        res += '#';
        for(string& s: strs) {
            res += s;
        }
        cout <<res;
        return res;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<string> ans;
        vector<int> sizes;
        int i = 0;
        while(s[i] != '#') {
            string tmp = "";
            while(s[i]!= ',') {
                tmp += s[i];i++;
            }
            sizes.push_back(stoi(tmp));
            i++;
        }
        i++;

        for(auto sz: sizes) {
            ans.push_back(s.substr(i, sz));
            i+=sz;
        }

        return ans;
    }
};
