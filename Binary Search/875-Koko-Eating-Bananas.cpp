#define OO 1000000001
#define ceil(n, m) ((n + m - 1) / m)  

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 0, r = OO;
        while (r - l > 1) {
            long long mid = l + (r - l) / 2;
            long long hours = 0;  
            for (int i = 0; i < piles.size(); ++i) {
                hours += ceil(piles[i], mid);
            }

            if (hours > h) {
                l = mid;
            } else {
                r = mid;
            }
        }
        return r;
    }
};
