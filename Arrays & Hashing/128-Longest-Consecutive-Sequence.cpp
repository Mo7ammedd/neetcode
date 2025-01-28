class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int mx = 1 , n = nums.size();
        if(n==0)
        return 0 ;
        unordered_set<int> st ;
        for (int i = 0; i < n ; ++i){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int ctr = 1 ;
                int x = it ;
                while(st.find(x+1)!=st.end()){
                    x+=1 ;
                    ctr+=1;
                }
                mx = max(mx,ctr);
            }

        }
        return mx;
        
    }
};