#include<bits/stdc++.h>
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sumi = accumulate(nums.begin(),nums.end(),0);
        return sumi%k;
    }
};