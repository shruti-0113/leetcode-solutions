class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int l1= 0 ,l2 = 0 , l3 = 0;
        for(int i : nums){
            if (i == 1){
                l1++;
            } else if (i == 2){
                l2 = max(l1,l2)+1;
            } else if (i == 3){
                l3 = max({l1,l2,l3})+1;
            }
        }
        int maxi = max({l1 , l2 , l3});

        return nums.size() - maxi;
        
    }
};