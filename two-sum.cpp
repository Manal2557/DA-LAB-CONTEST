class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int>mpp;
            vector<int>v;
            for(int i=0;i<nums.size();i++)
            {
                int num=nums[i];
                int needmore=target-num;
                if(mpp.find(needmore)!=mpp.end())
                {
                    v.push_back(i);
                    v.push_back(mpp[needmore]);
                    break;
                }
                mpp[num]=i;
            }
            return v;
    
        }
    };
