//1.Image Smoother
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ans(img.size());
        for(int i=0;i<img.size();i++)
        {
            for(int j=0;j<img[0].size();j++)
            {
                int s=0,cnt=0;
                for(int k=-1;k<=1;k++)
                {
                    for(int l=-1;l<=1;l++)
                    {
                       if(i+k>=0 && i+k<img.size() && j+l>=0 && j+l<img[0].size())
                      { s+=img[i+k][j+l];
                       cnt++;}
                    }
                }
               // cout<<i<<endl;
                ans[i].push_back(s/cnt);
            }
        }
        return ans;
    }
};