class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            unordered_map<int,int>mpp;
            for(int i=0;i<nums.size();i++)
            {
                if(mpp.find(nums[i])==mpp.end()&&mpp.find(nums[i]-1)!=mpp.end())
                {
                    mpp[nums[i]]=mpp[nums[i]-1]+1;
                }
                else if(mpp.find(nums[i])==mpp.end())
                mpp[nums[i]]=1;
            }
            int max=0;
            for(auto it:mpp)
            {
                if(it.second>max)
                {
                    max=it.second;
                }
            }
            return max;
        }
    };
