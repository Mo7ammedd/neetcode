class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int y = target - nums[i];
            // 2 7 11 15
            if (m.count(y)) {
                return {m[y], i};
            }
            m[nums[i]] = i; //m[2,0]
        }
        return {};
        
    }
};