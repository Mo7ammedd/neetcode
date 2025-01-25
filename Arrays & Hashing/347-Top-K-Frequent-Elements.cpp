class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        priority_queue<pair<int, int>> max;
        for (auto& i : freq) {
            max.push({i.second, i.first});
        }
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(max.top().second);
            max.pop();
        }

        return result;
    }
    
};