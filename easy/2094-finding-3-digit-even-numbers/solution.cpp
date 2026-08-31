class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<bool> seen(1000, false);
        int n = digits.size();

        for (int i = 0; i < n; i++) {
            if (digits[i] == 0) continue; 
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                for (int k = 0; k < n; k++) {
                    if (i == k || j == k) continue;
                    
                    if (digits[k] % 2 == 0) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        seen[num] = true;
                    }
                }
            }
        }

        vector<int> result;
        for (int num = 100; num < 1000; num += 2) {
            if (seen[num]) {
                result.push_back(num);
            }
        }
        return result;
    }
};