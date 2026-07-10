class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        //int count = 
        int n = nums.size()/2;
        for (int i = 0 ; i < nums.size() ; i++){
            if (nums[n] == nums[i] && (i != n)){
                return false;
            }
        }
        return true;
    }
};