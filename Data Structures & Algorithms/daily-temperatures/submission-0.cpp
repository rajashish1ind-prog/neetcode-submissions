class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      int n=temperatures.size();
      vector<int>res(n,0);
      stack<pair<int,int>>st;
      for(int i=0;i<n;i++)
      {
        int temp=temperatures[i];
        while(!st.empty() && temp>st.top().first)
        {
            auto p=st.top();
            st.pop();
            res[p.second]=i-p.second;
        }
        st.push({temperatures[i],i});
      }
      return res;  
    }
};
