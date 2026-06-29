class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans;
        for (int p = 0 ; p<nums.size() ; p++){
            ans.push_back(nums[p]);
        }
        
        int i = 0;
        int j = nums.size()-1;
        // while(i<j){
        //     swap(nums[i],nums[j]);
        // }
        while (i<j){
            int temp = nums[i]; 
           nums[i] = nums[j];
           nums[j] = temp;
           i++;
           j--;
        }
        for (int t = 0 ; t< nums.size() ; t++ ){
            ans.push_back(nums[t]);
        }

        return ans;
        

    }
};