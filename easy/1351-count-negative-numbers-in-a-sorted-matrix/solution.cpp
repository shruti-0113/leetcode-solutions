class Solution {
public:
    int countNegatives(vector<vector<int>>& nums) {
        int n = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            for (int j = 0 ; j < nums[i].size() ; j++){
                if (nums[i][j] < 0){
                    n++;
                }
            }
        }
        return n;
    }
};