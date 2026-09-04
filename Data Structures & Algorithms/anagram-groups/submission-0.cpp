class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(auto it:strs)
        {
            vector<int>freq(26,0);
            for(auto c:it)
            {
                freq[c-'a']++;
            }
            mp[freq].push_back(it);
        }
        vector<vector<string>>res;
        for(auto it:mp)
        {
            res.push_back(it.second);
        }
        return res;
    }
};
