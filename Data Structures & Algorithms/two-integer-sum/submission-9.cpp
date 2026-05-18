class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;

        for (int idx{0}; idx < std::size(nums); idx++)
        {
            int num {nums[idx]};

            auto needed = seen.find(target - num);

            if (needed == seen.end())
            {
                seen[num] = idx;
                continue;
            }

            return std::vector{seen[target-num], idx};
        }
    }
};
