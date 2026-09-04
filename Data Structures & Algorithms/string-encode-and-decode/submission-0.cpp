class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for(int i = 0; i < strs.size(); i++) {
            
            int wordSize = strs[i].size();

            encoded += to_string(wordSize);
            encoded += '#';
            encoded += strs[i];
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i = 0;

        while(i < s.size()) {

            int len = 0;

            // Length read karo
            while(s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }

            // '#' skip
            i++;

            // Word extract
            string word = s.substr(i, len);

            res.push_back(word);

            // Next encoded word
            i += len;
        }

        return res;

    }
};
