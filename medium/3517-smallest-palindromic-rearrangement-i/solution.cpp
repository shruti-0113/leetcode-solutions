class Solution {
public:
    string smallestPalindrome(string s) {
        int len = s.size();
        int half = len / 2;

        sort(s.begin(), s.begin() + half);

        for (int i = 0; i < half; ++i) {
            s[len - 1 - i] = s[i];
        }

        return s;
    }
};