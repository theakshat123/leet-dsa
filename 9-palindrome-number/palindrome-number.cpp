class Solution {
public:
    bool isPalindrome(int x) {
       int ans = 0 , rem;int original = x;
       if(x<0)
       return false;
       while(x != 0){
        rem = x % 10;
         if(ans>INT_MAX/10 || ans <INT_MIN/10)
         return 0;
        ans = ans * 10 + rem;
        x /= 10;
       }  return(original == ans);
       
    }
};