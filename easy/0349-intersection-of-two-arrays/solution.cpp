class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for (int i =0;i<nums1.size();i++){
            for (int j =0;j<nums2.size();j++){
                if (nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                }
            }
        }
        vector<int>ans2;
        // map<int,int>d;
        // for(auto it: ans){
        //     d[it]++;
        // }

        // for(auto it1: d){
        //     ans2.push_back(it1.first);
        // }
        // return ans2;
        set<int>s;
        for(int i =0;i<ans.size();i++){

        s.insert(ans[i]);
        }
        for(auto it: s){
            ans2.push_back(it);
        }
        
        return ans2;
    }
    

};