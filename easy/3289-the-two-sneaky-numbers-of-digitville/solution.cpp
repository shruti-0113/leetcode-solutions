class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>arr;
        map<int,int>m;
        for (auto i : nums){
            m[i]++;
        }
        for (auto j : m){
            if(j.second >1){
                arr.push_back(j.first);
            } 
        }
        return arr;
    }
};