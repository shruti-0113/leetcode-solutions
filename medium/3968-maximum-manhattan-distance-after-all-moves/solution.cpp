class Solution {
public:
    int maxDistance(string moves) {
        int up = 0 , down = 0, left = 0, right=0, extra = 0;
        for (char ch : moves){
            if (ch == 'U')up++;
            else if (ch == 'D')down++;
            else if (ch == 'L')left++;
            else if (ch == 'R')right++;
            else extra++;
        }
        return abs(right-left)+abs(up-down)+extra;
    }
};