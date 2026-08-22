class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        int prod = 1 ;
        int temp = n ;
        while(temp > 0){
            int digit = temp%10;
            sum += digit;
            prod *= digit;
            temp /= 10;
            
        }
        int c = sum+prod;
        if (c == 0) return false;
        return n % c == 0;

    }
};