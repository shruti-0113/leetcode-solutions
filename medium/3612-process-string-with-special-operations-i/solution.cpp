class Solution {
public:
    string processStr(string s) {
        string res;

        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                res.push_back(c);
            }
            else if (c == '*') {
                if (!res.empty()) {
                    res.pop_back();
                }
            }
            else if (c == '#') {
                string temp = res;
                res += temp;
            }
            else if (c == '%') {
                reverse(res.begin(), res.end());
            }
        }

        return res;
    }
};