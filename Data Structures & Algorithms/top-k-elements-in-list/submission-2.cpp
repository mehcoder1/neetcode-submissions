class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;

        for (auto num : nums)
        {
            frequency[num] += 1;
        }

        std::vector<std::pair<int, int>> final(frequency.begin(), frequency.end());

        std::sort(final.begin(), final.end(), [](const auto& a, const auto& b)
        {
            return a.second > b.second;
        });

        std::vector<int> returnVec;

        for (int i{0}; i < k; i++)
        {
            returnVec.push_back(final[i].first);
        }

        return returnVec;
    }
};
