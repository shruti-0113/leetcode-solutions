class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] != val){
                //ans.push_back(nums[i]);
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};