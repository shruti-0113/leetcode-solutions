#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    void backtrack(int n, int k, int index, int current_cost, string& current_str, vector<string>& result) {
        // Base case: string of length n is formed
        if (index == n) {
            result.push_back(current_str);
            return;
        }

        // Option 1: Always try adding '0' (doesn't affect cost or consecutive 1s rule)
        current_str.push_back('0');
        backtrack(n, k, index + 1, current_cost, current_str, result);
        current_str.pop_back();

        // Option 2: Try adding '1' if constraints allow
        // Constraint 1: No two consecutive '1' characters
        bool noConsecutiveOnes = (index == 0 || current_str.back() == '0');
        // Constraint 2: Total cost must be <= k
        int new_cost = current_cost + index;

        if (noConsecutiveOnes && new_cost <= k) {
            current_str.push_back('1');
            backtrack(n, k, index + 1, new_cost, current_str, result);
            current_str.pop_back();
        }
    }

    vector<string> generateValidStrings(int n, int k) {
        vector<string> result;
        string current_str = "";
        backtrack(n, k, 0, 0, current_str, result);
        return result;
    }
};