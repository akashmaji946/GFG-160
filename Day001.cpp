
/*
akashmaji945(@gmail.com)
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        if(arr.size() == 0){
            return -1;
        }
           
        int max1 = arr[0];
        int max2 = -1;;
        
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }else if(arr[i] > max2 and arr[i] != max1){
                max2 = arr[i];
            }
        }
        
        return max2;
        
    }
};