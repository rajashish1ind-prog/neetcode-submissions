class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     map<int,int>mp;
     for(auto it:nums)
     {
        mp[it]++;
     }
     vector<pair<int,int>>numsWidFreq;
     for(auto it:mp)
     {
        pair<int,int>temp;
        temp.first=it.second;
        temp.second=it.first;
        numsWidFreq.push_back(temp);
     }  
     sort(numsWidFreq.rbegin(), numsWidFreq.rend());
     vector<int>res;
     for(int i=0;i<k;i++)
     {
        res.push_back(numsWidFreq[i].second);
     }
     return res;
    }
};
