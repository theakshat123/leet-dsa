class Solution {
public:
 int characterReplacement(string s, int k) {
vector<int>freq(26,0);
int n=s.size();
  int left=0,ans=0,maxfreq=0;
  for(int right=0;right<n;right++){
    freq[s[right]-'A']++;
    maxfreq=max(maxfreq,freq[s[right]-'A']);
    //int len=right-left+1;
    while((right-left+1)- maxfreq>k){
        freq[s[left]-'A']--;
        left++;
    } ans=max(ans,right-left+1); }
    return ans;
    }
};