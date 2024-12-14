/*
akashmaji945(@gmail.com)
*/class Solution {
  public:
    int myAtoi(char *s) {
        
        long long int ans = 0;
        bool neg = 0;
        while(*s == ' ') s++;
        if(*s == '-'){
            neg = 1;
            s++;
        }
        // cout << "NEG: " << neg << endl;
        while(*s == '0') // or (*s >= 'a' and *s <= 'z') or (*s >= 'A' and *s <= 'Z')) s++;
            s++;
        char* start = s;
        
        while(*s >= '0' and *s <= '9') s++;
        char* end = s;

        while(start < end){
            ans = ans + ((*start)-'0');
            // cout << ans << endl;
            if(!neg and ans > 2147483647){
               return 2147483647;
            }else if (neg and ans > 2147483648){
               return -2147483648;
            }
            ans = ans * 10;
            start++;
        }
        // cout << "-----------------\n";
        return neg ? (int)(ans/-10L) :  (int)(ans/10L);
    }
};