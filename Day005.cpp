/*
akashmaji945(@gmail.com)
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        if(n <= 1){
            return;
        }
        int i = n-2;
        while(i >= 0 and arr[i] >= arr[i+1]){
            i--;
        }
        if(i < 0){
            reverse(arr.begin(), arr.end());
            return;
        }
        int nextlarge = INT_MAX;
        int swapidx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i] and arr[j] < nextlarge){
                nextlarge = arr[j];
                swapidx = j;
            }
        }
        swap(arr[i], arr[swapidx]);
        reverse(arr.begin() + i + 1, arr.end());
        return;
        
    }
};