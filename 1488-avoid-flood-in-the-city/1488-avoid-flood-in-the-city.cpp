class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        unordered_map<int, int> mp;
        int n = rains.size();

        set<int> st;              // dry days
        vector<int> ans(n, 1);    // default for dry days

        for (int i = 0; i < n; i++) {

            if (rains[i] == 0) {
                st.insert(i);
                continue;
            }

            int lake = rains[i];

            // Lake has already been filled
            if (mp.find(lake) != mp.end()) {

                int prev = mp[lake];

                // Find a dry day AFTER prev
                auto it = st.upper_bound(prev);

                if (it == st.end()) {
                    return {};
                }

                // Dry this lake on that day
                ans[*it] = lake;

                st.erase(it);
            }

            // Current day is now the latest rain day for this lake
            mp[lake] = i;

    
            ans[i] = -1;
        }

        return ans;
    }
};