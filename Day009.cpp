/*
akashmaji945(@gmail.com)
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int ans = arr[n-1] - arr[0];
        
        for(int i = 1; i < n; i++){
            if(arr[i] - k < 0){
                continue;
            }
            int minh = min(arr[0]+k, arr[i]-k);
            int maxh = max(arr[n-1]-k, arr[i-1]+k);
            ans = min(ans, maxh-minh);
        }
        return ans;
        
    }
};