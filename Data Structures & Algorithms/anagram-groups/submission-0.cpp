class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto &s:strs){
            string t=s;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
        }
        vector<vector<string>>ans;
        for(auto &v:mp){
            vector<string>temp;
            for(auto &s:v.second)temp.push_back(s);
            ans.push_back(temp);
        }
        return ans;
    }
};
