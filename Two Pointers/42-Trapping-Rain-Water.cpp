class Solution {
public:
    int trap(vector<int>& height) {        
        int res = 0, l = 0, r = height.size() - 1;
        int mxl = height[l], mxr = height[r];

        while (l < r) {
            if (mxl <= mxr) {
                l++;
                mxl = max(mxl, height[l]);
                res +=  mxl - height[l];
            } else {
                r--;
                mxr = max(mxr, height[r]);
                res += mxr - height[r];
            }
        }

        return res;
    }
};
