class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0 ;
        map<int,int>m;
        for (auto i : nums){
            m[i]++;
        }
        for (auto j : m){
            if (j.second <=1){
                sum+=j.first;
            }

        }
        return sum;
    }
};