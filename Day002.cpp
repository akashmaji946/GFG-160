/*
akashmaji945(@gmail.com)
*/
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        int i = 0, j = 0;
        
        while(true){
            if(j >= n or i >= n) break;
            
            while(j < n and arr[i] != 0){
                i++;
                j++;
            }
            
            if(j == n) break;
            
            while(j < n and arr[j] == 0){
                j++;
            }
            
            if(j == n) break;
            
            swap(arr[i], arr[j]);
            i++;
            j++;
            
        }
    }
};