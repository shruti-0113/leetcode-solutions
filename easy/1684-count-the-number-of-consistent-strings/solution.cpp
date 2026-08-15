class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> isAllowed(26, false);
        for (char c : allowed) {
            isAllowed[c - 'a'] = true;
        }
        int count = 0;
        for (const string& word : words) {
            bool consistent = true;
            for (char c : word) {
                if (!isAllowed[c - 'a']) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                count++;
            }
        }
        return count;
    }
};