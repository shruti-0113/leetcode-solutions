class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        for (auto j : mp){
            if (j.second == 1) return j.first;
        }
        return -1;
    }
};