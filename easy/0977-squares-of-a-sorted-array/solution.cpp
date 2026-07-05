class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int x = nums.size()-1; 
        for (int i = 0 ; i <= x ; i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};