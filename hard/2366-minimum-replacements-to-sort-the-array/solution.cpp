class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long operations = 0;
        int n = nums.size();
        int next_bound = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] > next_bound) {
                long long pieces = (nums[i] + next_bound - 1) / next_bound;
                operations += (pieces - 1);
                next_bound = nums[i] / pieces;
            } else {
                next_bound = nums[i];
            }
        }  
        return operations;
    }
};