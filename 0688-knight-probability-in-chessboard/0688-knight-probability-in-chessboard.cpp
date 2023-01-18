class Solution {
public:
   
    double rec(int n,int k,int row,int column,vector<vector<vector<double>>>&dp){
       
        if(row<0 || column<0 || row>=n || column>=n){
            
            return 0;
        }
        
        
        if(k==0)return 1;
        
         if(dp[row][column][k]!=0) return dp[row][column][k];
        
         
       
        double ans=0;
        
        ans=rec(n,k-1,row-2,column+1,dp)+
        rec(n,k-1,row+2,column-1,dp)+//
        rec(n,k-1,row-2,column-1,dp)+//
        rec(n,k-1,row+2,column+1,dp)+//
        rec(n,k-1,row+1,column-2,dp)+//
        rec(n,k-1,row+1,column+2,dp)+//
        rec(n,k-1,row-1,column-2,dp)+//
        rec(n,k-1,row-1,column+2,dp);//
        
        
        ans=ans/8.0;
        
        dp[row][column][k]=ans;
        
        return ans;
    }
    
    double knightProbability(int n, int k, int row, int column) {
       // double ans=0;
        
       vector<vector<vector<double>>>dp(n,vector<vector<double>>(n,vector<double>(k+1)));
        
        if(k==0){
            return 1.00000;
        }
        
        return rec(n,k,row,column,dp);
    }
};