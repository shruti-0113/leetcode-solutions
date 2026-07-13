class Solution {
public:
    int minElement(vector<int>& nums) {
        
        vector<int>arr;
        for  (int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            while (nums[i]>0){

                int digit = nums[i]%10;
                sum+=digit;
                nums[i]/=10;
                
            }
            arr.push_back(sum);
        }
        int x = *min_element(arr.begin(), arr.end());
        return x;
    }
};