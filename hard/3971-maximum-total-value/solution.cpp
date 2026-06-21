class Solution {
public:
    static const int MOD = 1e9 + 7;

    long long sumAP(long long a, long long d, long long cnt) {
        
        return cnt * (2 * a - (cnt - 1) * d) / 2;
    }

    int maxTotalValue(vector<int>& value, vector<int>& decay, int m) {
        int n = value.size();

        long long low = 1, high = 0;
        for (int v : value) high = max(high, (long long)v);

       
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long cnt = 0;

            for (int i = 0; i < n; i++) {
                if (value[i] < mid) continue;

                if (decay[i] == 0) {
                    cnt += m; 
                } else {
                    cnt += (value[i] - mid) / decay[i] + 1;
                }

                if (cnt > m) break;
            }

            if (cnt >= m)
                low = mid + 1;
            else
                high = mid - 1;
        }

        long long T = high;
        long long ans = 0, taken = 0;

        for (int i = 0; i < n; i++) {
            long long cnt = 0;

            if (value[i] >= T + 1) {
                if (decay[i] == 0)
                    cnt = m;
                else
                    cnt = (value[i] - (T + 1)) / decay[i] + 1;
            }

            cnt = min(cnt, (long long)m - taken);
            taken += cnt;

            if (cnt > 0) {
                ans = (ans + sumAP(value[i], decay[i], cnt)) % MOD;
            }
        }

  
        ans = (ans + (long long)(m - taken) * T) % MOD;

        return (int)(ans % MOD);
    }
};