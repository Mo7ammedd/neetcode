class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while(l<r){
            //{2,7,11,15} target = 9
            if(numbers[l] + numbers[r] == target){
                return {l+1,r+1};
            }
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
            else
            l ++ ;
        }
        return {};
        
    }
};