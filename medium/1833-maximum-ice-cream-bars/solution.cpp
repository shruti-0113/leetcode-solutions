class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
      int maxCost = *max_element(costs.begin(),costs.end());
      vector<int>freq(maxCost+1,0);
      for (int cost : costs){
        freq[cost]++;
      }  
      int count = 0;

      for (int price = 1; price<=maxCost;price++){
        while (freq[price]>0 && coins>= price){
            coins-=price;
            count++;
            freq[price]--;
        }
      }

      return count;
    }
};