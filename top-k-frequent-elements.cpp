class Solution {
    public:
    static bool compare(pair<int,int>& a,pair<int,int>& b)
    {
        return b.second<a.second;
    }
    
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int,int>mpp;
            for(int i=0;i<nums.size();i++)
            {
                mpp[nums[i]]++;
            }
            vector<pair<int,int>>v(mpp.begin(),mpp.end());
            sort(v.begin(),v.end(),compare);
            vector<int>v1;
            for(int i=0;i<k;i++)
            {
                v1.push_back(v[i].first);
            }
            return v1;
        }
    };
