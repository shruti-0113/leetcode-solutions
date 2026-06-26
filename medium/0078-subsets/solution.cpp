class Solution {
    void solve(int i, vector<vector<int>>& ans, vector<int>& res, vector<int>& nums){
        if(i == nums.size()){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        solve(i+1,ans,res,nums);
        res.pop_back();
        solve(i+1,ans,res,nums);
        return;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        solve(0,ans,res,nums);
        return ans;
    }
};