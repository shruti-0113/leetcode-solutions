class Solution {
public:
    int firstDigit(long long num){
        num = abs(num);
        while (num>=10)num/=10;
        return (int)num;
    }
    
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        vector<long long>pref(n+1,0);

        for (int i = 0 ; i<n ; i++){
            pref[i+1]=pref[i]+nums[i];
            
        }
        int ans =0;

        for (int i = 0;i<n ; i++){
            for (int r=i ; r<n ; r++){
                long long sum = pref[r+1]-pref[i];
                if (firstDigit(sum)==x && abs(sum)%10 == x){
                    ans++;
                }
            }
        }
        return ans;
    }
};