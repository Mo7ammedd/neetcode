class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //1 2 3 4
        //1  2 6  24
        //4 12 24 24
        int n = nums.size();
        vector<int> res(n,1), prefix(n,1),suffix(n,1);
        for (int i = 0 ; i < n ; i++){
            prefix[i] = (i > 0 ? prefix[i-1] : 1) * nums[i];
        }
        for (int i = n-1; i >= 0 ; i--){
            suffix[i] = (i < n-1 ? suffix[i+1] : 1) * nums[i];
        }

        for (int i = 0 ; i < n ; i++){
            if (i>0){
                res[i] *= prefix[i-1];
            }
            if (i <n-1){
                res[i] *= suffix[i+1];
            }
        }

        

        return res;
        
    }
};