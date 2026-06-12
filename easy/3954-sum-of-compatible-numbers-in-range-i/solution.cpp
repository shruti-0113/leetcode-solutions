class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        long long totalSum = 0;
        int start = std::max(1, n-k);
        int end = n+k;

        for (int x = start ; x <= end ; ++x){
            if ((n&x) == 0){
                totalSum +=x;
            }
        }
        return totalSum ;
    }
    int main (){
            int n=2 , k=3;
            std::cout << "input: n = " << n << " , k = " << k << std::endl;
            std::cout << "output: " << sumOfGoodIntegers(n,k) << std::endl;

            return 0;
        }
};