class Solution {
public:
    int totalFruit(vector<int>& s) {
      int low=0;
      int n=s.size();
      int res=INT_MIN;
      unordered_map<int,char>freq;
      for(int right=0;right<n;right++){
      freq[s[right]]++;
      while(freq.size()>2){
        freq[s[low]]--;
        if(freq[s[low]]==0)
        {freq.erase(s[low]);}low++;
      }
      if(freq.size()<=2){
        int len=right-low+1;
        res =max(res,len);
      
      } } if(res==INT_MIN){
        return -1;
      }
      return res;
    } 
    
};