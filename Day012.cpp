/*
akashmaji945(@gmail.com)
*/
using namespace std;
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        int n = arr.size();
        vector<int> suffix(n+1, 0);
        
        suffix[n-1] = arr[n-1];
        int sufsum = arr[n-1];
        
        for(int i = n-2; i >= 0; i--){
            sufsum += arr[i];
            suffix[i] = max(suffix[i+1], sufsum);
        }
        
        int cirsum = arr[0];
        int prefix = 0;
        
        int cursum = 0;
        int maxsum = arr[0];
        for(int i = 0; i < n; i++){
            cursum = max(cursum + arr[i], arr[i]);
            maxsum = max(maxsum, cursum);
            
            prefix += arr[i];
            cirsum = max(cirsum, prefix + suffix[i+1]);
            
            
        }
        // cout << maxsum << ":" << cirsum << endl;
        return max(maxsum, cirsum);
    }
};