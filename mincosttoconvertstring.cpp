class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<pair<char,int>>> v(26);
        for(int i=0;i<cost.size();i++)
        {
            v[original[i]-'a'].push_back({changed[i],cost[i]});
        }
        long long cnt=0;
        for(int i=0;i<source.size();i++)
        {
            if(source[i]!=target[i])
            {
                for(int j=0;j<v[source[i]-'a'].size();j++)
                {
                     if(v[source[i]-'a'][j].first==target[i])
                     {
                        cnt+=v[source[i]-'a'][j].second;
                        break;
                     }
                }
            }
            cout<<cnt<<" "<<source[i]<<endl;
        }
       return cnt;
    }
};