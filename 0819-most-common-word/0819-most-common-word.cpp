class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_map<string, int> mp;
        unordered_set<string> st;

        // Store banned words
        for (string s : banned) {
            st.insert(s);
        }

        // Convert punctuation to spaces and lowercase
        for (char &c : paragraph) {
            if (ispunct(c)) {
                c = ' ';
            } else {
                c = tolower(c);
            }
        }

        // Count frequency
        string word;
        stringstream ss(paragraph);

        while (ss >> word) {
            if (st.find(word) == st.end()) {
                mp[word]++;
            }
        }

        // Find maximum frequency
        string ans = "";
        int max_freq = 0;

        for (auto &p : mp) {
            if (p.second > max_freq) {
                max_freq = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};