class Solution {
public:
    int mirrorDistance(int n) {
        int rev_num = 0;
        int y = n;
        while (n!=0){
            int remainder = n%10;
            rev_num = rev_num*10 + remainder;
            n /=10;
        }
        int x = abs(rev_num - y);
        return x;
    }
};