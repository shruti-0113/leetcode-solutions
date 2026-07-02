class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int product = 1;
        int temp = n;
        while(n!=0){
            int digit = n%10;
            sum += digit;
            n/=10;
        }
        while(temp>0){
            int x = temp%10;
            product *= x;
            temp = temp/10;
        }
        return product - sum;
    }
};