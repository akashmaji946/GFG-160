/*
akashmaji945(@gmail.com)
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        map<int, int> mp;
        for(int& a: arr){
            mp[a]++;
        }
        
        int n = arr.size();
        vector<int> ans;
        for(int& a: arr){
            if(mp[a] > n/3){
                mp[a] = 0;
                ans.push_back(a);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};