class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = 0;
        vector<int>ans(n);
        for (int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[n] , nums[i]);
                n++;
            }
        }
        
    }
};