// class Solution {
// public:
//     bool validPalindrome(string s) {
//        int start = 0 , end = s.size()-1;
//        while(start<end){
//         if(s[start])
//        } 
//     }
// };
class Solution {
public:
    bool isPal(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return isPal(s, left + 1, right) ||
                       isPal(s, left, right - 1);
            }
        }
        return true;
    }
};