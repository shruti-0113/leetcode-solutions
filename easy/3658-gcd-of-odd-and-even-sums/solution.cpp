class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n; 
    }
};
// sum of first n odd numbers = n^2
// sum of first n even numbers = n(n+1)
// GCD(n^2,n(n+1))=n (bcz consecutive no. are coprime) 