class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x = *max_element(nums.begin(),nums.end());
        int y = *min_element(nums.begin(),nums.end());
        //return gcd(x,y);
        while (y !=0){
            int temp = y;
            y = x%y;
            x = temp;
        }
        return x;
    }
};