class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> f;

        for (int num : nums) {
            if (f[num] > 0) {
                return true;
            }
            f[num]++;
        }
        return false;
    }
};
