class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.size();
   int k,res =0;
   unordered_map<char,int>f;
   int low=0,high=0;
   for(high=0;high<n;high++){
  f[s[high]]++;
  k=high-low+1;
  while(f.size()<k){
    f[s[low]]--;
    if(f[s[low]]==0)
    f.erase(s[low]);
    low++;
    k=high-low+1;
  }
  k=high-low+1;
  res=max(res,k);
   } if(res==INT_MIN)
   {return 1;}
   return res;
  }
  
};
