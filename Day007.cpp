/*
akashmaji945(@gmail.com)
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int i, j, n;
        n = prices.size();
        i = 0;
        return help(prices, i, n);
        
    }
    
    int help(vector<int>& arr, int i, int n){
        if(i == n-1){
            return 0;
        }
        int buy = arr[i];
        int sell = arr[i];
        i++;
        while(i < n){
            if(arr[i] > arr[i-1]){
                sell = arr[i];
            }else{
                // int profitsofar = sell - buy;
                return (sell-buy) + help(arr, i, n);
            }
            i++;
        }
        return (sell-buy);
    }
};
