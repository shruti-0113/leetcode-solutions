class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<vector<long long>> mul(vector<vector<long long>>& A,
                                  vector<vector<long long>>& B) {
        int n = A.size();
        vector<vector<long long>> C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;
                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;
                    C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }
        return C;
    }

    vector<vector<long long>> matPow(vector<vector<long long>> base, long long exp) {
        int n = base.size();
        vector<vector<long long>> res(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++)
            res[i][i] = 1;

        while (exp) {
            if (exp & 1)
                res = mul(res, base);

            base = mul(base, base);
            exp >>= 1;
        }
        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        

       
        vector<long long> init(2 * m, 1);

        
        vector<vector<long long>> T(2 * m, vector<long long>(2 * m, 0));

        for (int x = 0; x < m; x++) {

            
            for (int y = x + 1; y < m; y++) {
                T[m + y][x] = 1;
            }

            
            for (int y = 0; y < x; y++) {
                T[y][m + x] = 1;
            }
        }

        auto P = matPow(T, n - 1);

        vector<long long> finalState(2 * m, 0);

        for (int i = 0; i < 2 * m; i++) {
            for (int j = 0; j < 2 * m; j++) {
                finalState[i] =
                    (finalState[i] + P[i][j] * init[j]) % MOD;
            }
        }

        long long ans = 0;
        for (long long x : finalState)
            ans = (ans + x) % MOD;

        return ans;
    
    }
};