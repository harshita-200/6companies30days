class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v(n);
        for(int i=1;i<=n;i++)
        v[i-1]=i;
        int start=0;
        while(v.size()>1)
        {
                int toremove=(start+k-1)%(v.size());
                v.erase(v.begin()+toremove);
                 start=toremove;
        }
        return v[0];
    }
};