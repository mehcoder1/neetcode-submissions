class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, int> stringMap; 
        int key{};

        for (auto str : strs)
        {
            std::sort(str.begin(), str.end());

            auto it {stringMap.find(str)};
            
            if (it != stringMap.end())
            {
                stringMap[str] = it->second;
            }
            else
            {
                stringMap[str] = key;
                key++;
            }
        }

        std::vector<std::vector<std::string>> final(key);
        for (int idx{0}; idx < std::size(strs); idx++)
        {
            std::string str {strs[idx]};

            std::sort(str.begin(), str.end());

            final[stringMap[str]].push_back(strs[idx]);
        }
        
        return final;
    }
};
