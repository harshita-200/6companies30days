class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                bool flag=1;
                int el=INT_MIN;
                for(int k=0;k<nums.size();k++)
                {
                    if(k>=i && k<=j)
                    continue;
                    if(k>0 && nums[k]<=el)
                    {
                        flag=0;
                        k=nums.size()-1;
                    }
                    el=nums[k];
                }
                cout<<cnt<<" "<<i<<" "<<j<<endl;
                if(flag)
                cnt++;
            }
        }
        return cnt;
    }
};