/*
akashmaji945(@gmail.com)
*/
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        
        int i = 0;
        int j = n-1;
        
        int lr = 1;
        int rl = 1;
        int ans = INT_MIN;
        
        while(i < n and j > -1){
            lr = lr * arr[i];
            rl = rl * arr[j];
            ans = max(ans, max(lr, rl));
            if(lr == 0) lr = 1;
            if(rl == 0) rl = 1;
            i++;
            j--;
        }
        return ans;
    }
};