/*
akashmaji945(@gmail.com)
*/
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        
        int i = 0;
        int j = (int)(arr.size()) - 1;
        while(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        
    }
};