class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
     int n = strs.size();
     string ans="";
     int minlength=min(strs[0].size(),strs[n-1].size()) ;
     for (int i=0;i<minlength;i++)  {
        if(strs[0][i]!=strs[n-1][i]){break;}
        ans += strs[0][i];
     }
      return ans;
    }
};