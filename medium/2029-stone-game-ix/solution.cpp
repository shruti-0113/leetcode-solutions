// class Solution {
// public:
//     bool stoneGameIX(vector<int>& stones) {
//         // int sum = 0;
//         // for (int i = 0 ; i < stones.size() ; i++){
//         //     sum += stones[i];
//         //     if(sum % 3 == 0) return true;
//         // }
//         // return false;
        
//     }
// };
class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int> cnt(3, 0);
        for (int stone : stones) {
            cnt[stone % 3]++;
        }
        
        if (cnt[0] % 2 == 0) {
            return cnt[1] >= 1 && cnt[2] >= 1;
        }
        
        return abs(cnt[1] - cnt[2]) > 2;
    }
};