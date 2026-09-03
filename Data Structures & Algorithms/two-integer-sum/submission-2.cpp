class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        int complement;
        for(int i=0;i<nums.size();i++)
        {
            complement=target-nums[i];
            if(mp.count(complement) && mp[complement] != i)
            {
                return {min(i, mp[complement]), max(i, mp[complement])};
            }    
        }
        return {};
    }
};