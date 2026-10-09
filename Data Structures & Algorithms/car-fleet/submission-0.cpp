class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,int>> POS;

        for(int i = 0; i < speed.size(); i++)
        {
            pair<int,int> temp = {position[i], speed[i]};
            POS.push_back(temp);
        }

        sort(POS.begin(), POS.end());

        stack<pair<int,int>> st;

        for(int i = POS.size() - 1; i >= 0; i--)
        {
            if(st.empty())
            {
                st.push(POS[i]);
            }
            else
            {
                auto p = POS[i];

                double currentTime =
                    (double)(target - p.first) / p.second;

                double frontTime =
                    (double)(target - st.top().first) /
                    st.top().second;

                if(currentTime > frontTime)
                {
                    st.push(p);
                }
            }
        }

        return st.size();
    }
};