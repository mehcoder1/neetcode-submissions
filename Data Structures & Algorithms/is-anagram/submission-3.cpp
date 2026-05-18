#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        bool isEqual {s == t};
        if (isEqual)
            return true;
        else
            return false;
    }
};
