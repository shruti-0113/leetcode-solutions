class Solution {
public:
int zigZagArrays(int n, int l, int r) {
const int MOD = 1000000007;
int m = r - l + 1;

vector<long long> up(m, 1), down(m, 1);  
    vector<long long> newUp(m), newDown(m);  
    vector<long long> pref(m), suff(m);  

    for (int len = 2; len <= n; len++) {  

          
        pref[0] = down[0];  
        for (int i = 1; i < m; i++)  
            pref[i] = (pref[i - 1] + down[i]) % MOD;  

          
        newUp[0] = 0;  
        for (int i = 1; i < m; i++)  
            newUp[i] = pref[i - 1];  

          
        suff[m - 1] = up[m - 1];  
        for (int i = m - 2; i >= 0; i--)  
            suff[i] = (suff[i + 1] + up[i]) % MOD;  

          
        for (int i = 0; i < m - 1; i++)  
            newDown[i] = suff[i + 1];  
        newDown[m - 1] = 0;  

        swap(up, newUp);  
        swap(down, newDown);  
    }  

    long long ans = 0;  
    for (int i = 0; i < m; i++) {  
        ans = (ans + up[i] + down[i]) % MOD;  
    }  

    return (int)ans;  
}

};