class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for(const string& p : patterns){
            if(word.find(p) != string::npos){
                ans++;
            }
        }
        return ans;
    }
};