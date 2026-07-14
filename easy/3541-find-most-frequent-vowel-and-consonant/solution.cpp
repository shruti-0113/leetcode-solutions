class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>m;
        for(auto i : s){
            m[i]++;
        }
        int vow = 0;
        int con = 0 ;
        for(auto j: m){
            char ch = j.first;
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vow = max(vow , j.second);

            }
            else{
                con = max(con , j.second);
            }
        }
        int sum = vow+con;
        return sum;
        
    }
};