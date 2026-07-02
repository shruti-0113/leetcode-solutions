class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>arr;
        int digit = 0;
        int x =0;
        while (n>0){
            digit = n%10;
            arr.push_back(digit);
            n/=10;
        }
        map<int , int>m ;
        for (auto i : arr ){
            m[i]++;
        }
        for (auto j : m){
            x+=j.first*j.second;
        }
        return x;
    }
};