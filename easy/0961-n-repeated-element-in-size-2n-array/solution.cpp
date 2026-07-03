class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int , int>m;
        for (auto i : nums){
            m[i]++;
        }
        for (auto j : m){
            if (j.second >1)
                return j.first;
            
        }
        return -1;
    }
};