class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int ans = k;
        for (int a : nums){
            if (a == ans){
                ans+=k;
            }
        }
        return ans;
    }
};