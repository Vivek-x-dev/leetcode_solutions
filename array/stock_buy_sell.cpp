/*Given an integer array prices[],
where prices[i] is the price of a given stock on the ith day. Each day you 
may decide to either buy or sell the stock at price[i], you can even buy and
sell the stock on the same day,return the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and 
multiple stocks cannot be held on any given day.*/

//--------------optimal solutin--------O(n)


class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int max_profit =0;
       int n= prices.size();
        for (int i=1; i<n; i++){
           if( prices[i] > prices[i-1]){
            max_profit += prices[i] - prices[i-1];
           }
        }
        return max_profit;
    }
};
