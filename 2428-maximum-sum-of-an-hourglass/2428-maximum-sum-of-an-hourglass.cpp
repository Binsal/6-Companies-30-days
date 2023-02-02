class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int maxi=0;
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
             
            
            for(int j=0;j<grid[i].size();j++){
                if(i==0||j==0||i==grid.size()-1||j==grid[i].size()-1)continue;
                ans=0;
                ans+=grid[i][j];
                ans+=grid[i+1][j];
                ans+=grid[i+1][j-1];
                ans+=grid[i+1][j+1];
                ans+=grid[i-1][j];
                ans+=grid[i-1][j-1];
                ans+=grid[i-1][j+1];
                
                maxi=max(maxi,ans);
            }
           
        }
        
        return maxi;
    }
};