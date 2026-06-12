#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> result;
        string current = "";
        backtrack(n, k, 0, 0, '0', current, result);
        return result;
    }

private:
    
    void backtrack(int n, int k, int index, int currentCost, char prevChar, string& current, vector<string>& result) {
        
        if (index == n) {
            result.push_back(current);
            return;
        }

        
        current.push_back('0');
        backtrack(n, k, index + 1, currentCost, '0', current, result);
        current.pop_back();

        
        
        if (prevChar != '1' && (currentCost + index <= k)) {
            current.push_back('1');
            backtrack(n, k, index + 1, currentCost + index, '1', current, result);
            current.pop_back();
        }
    }
};