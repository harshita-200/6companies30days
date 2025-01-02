class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<=10)
        return {};
        vector<string> ans;
        string t=s.substr(0,10);
        unordered_map<string,int> mp;
        mp[t]++;
        for(int i=1;i<=s.size()-10;i++)
        {
            t=s.substr(i,10);
            mp[t]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            ans.push_back(it.first);
        }
        return ans;
    }
};