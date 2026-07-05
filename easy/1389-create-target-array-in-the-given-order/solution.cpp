class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int x = nums.size();
        vector<int>arr;
        for (int i = 0 ; i < x ; i++){
            //arr.push_back(nums[i]+index[i]);
            arr.insert(arr.begin() + index[i], nums[i]);
        }
        return arr;
    }
};