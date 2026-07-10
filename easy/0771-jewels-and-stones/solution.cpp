class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int p =0;
        map<char,int>m;
        for(auto i : stones){
            m[i]++;
        }
        map<char,int>m1;
        for(auto j : jewels){
            m1[j]++;
        }
        for(auto x : m){
            for (auto y : m1){
                if (x.first == y.first){
                    p+=x.second;
                }
            }
        }
        return p;
    }
};