class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for (auto i : nums){
            m[i]++;
        }
        for (auto j : m){
            if(j.second <2 ){
                return j.first ;
            }          
        }
        return 0;
    }
};