/*
akashmaji945(@gmail.com)
*/
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        map<int, bool> mpp;
        for(int a: arr){
            mpp[a] = 1;
        }
        for(int i = 1; i <= (int)(1e6); i++){
            if(mpp.find(i) == mpp.end()){
                return i;
            }
        }
        return -1;
    }
};