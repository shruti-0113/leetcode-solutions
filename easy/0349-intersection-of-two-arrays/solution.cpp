class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>s;
       for(auto i : nums1){
            s.insert(i);
       }
       map<int,int>m;
       for (auto j : nums2){
            m[j]++;
       }
       vector<int>ans;
       for (auto k : s){
        for(auto it : m){
             if (k == it.first){
                ans.push_back(k);
             }
        }
       }
       return ans;
    }
};