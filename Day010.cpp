/*
akashmaji945(@gmail.com)
*/
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int ans = INT_MIN;
        int n = arr.size();
        
        int curr_sum = 0;
        int max_sum = ans;
        for(int i = 0; i < n; i++){
            curr_sum += arr[i];
            if(curr_sum > max_sum){
                max_sum = curr_sum;
            }
            
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        return max_sum;
    }
};