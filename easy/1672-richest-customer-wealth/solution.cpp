class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0; // current wealth
        
        for(int i = 0 ; i < accounts.size() ; i++){
            int x = 0; // current wealth
            for (int j = 0 ; j < accounts[i].size() ; j++){
                x +=accounts[i][j];
            }
            maxi = max(maxi,x);
       } 
       return maxi;
    }
};