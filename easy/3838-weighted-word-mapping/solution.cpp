class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        
        for (const string& word : words) {
            int wordWeight = 0;
            for (char c : word) {
                wordWeight += weights[c - 'a'];
            }
            
            int remainder = wordWeight % 26;
            char mappedChar = 'z' - remainder;
            result += mappedChar;
        }
        
        return result;
    }
};