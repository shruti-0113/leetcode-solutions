class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans="" ; 
        string word ;  
        while (ss >> word){
            if (ans.empty())
                ans = word;
            else
                ans = word +" " + ans;
            
        }
       // string x = ans.pop_back();
        return ans;
    }
};