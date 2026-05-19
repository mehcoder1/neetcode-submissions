class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for (auto& str : strs)
            s += to_string(std::size(str)) + '#' + str;
        
        return s;
    }

    vector<string> decode(string s) {
        vector<string> final;
        string numberString;
        int lenString;
        int startIndex{0};
        for (size_t i{0}; i < std::size(s); i++)
        {
            if ((s[i] - '0') >= 0 && (s[i] - '0') < 10)
                numberString.push_back(s[i]);

            if (s[i] == '#')
            {
                lenString = stoi(numberString);
                startIndex = i + 1;
                i += lenString;
                final.push_back(s.substr(startIndex, lenString));
                numberString = "";
            }
        }
        return final;
    }
};
