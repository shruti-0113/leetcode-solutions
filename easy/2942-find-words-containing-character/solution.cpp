class Solution {
public:
    vector<int> findWordsContaining(vector<string>& nums, char x) {
       vector<int>arr;
       for(int i = 0 ; i<nums.size() ; i++){
            for (int j =0 ; j < nums[i].size(); j++){
                if (nums[i][j] == x){
                    arr.push_back(i);
                    break;
                }
            }
       }
       return arr;
    }
};