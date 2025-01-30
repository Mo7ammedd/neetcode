class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int mx = 0;

        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            mx = max(mx, area);

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return mx;
    }
};
