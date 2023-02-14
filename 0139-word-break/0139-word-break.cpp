class Solution {
public:
    
    int help(string s,set <string> & wordDict,int i,int* dp){
    if(dp[i]!=-1){return dp[i]; }
        
        if(i==s.size())return 1;
        string temp;
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(wordDict.find(temp)!=wordDict.end()){
                  if(help(s,wordDict,j+1,dp)){
                    
                     return dp[i]=1;
                  }
            }
          }
         return dp[i]=0;
        }       
     
    
    bool wordBreak(string s, vector<string>& wordDict) {
      int dp[301];
   memset(dp,-1,sizeof dp);
        
        set <string> st;
        for(auto a:wordDict){
            st.insert(a);
        }
            
      return help(s,st,0,dp);
    }
};
