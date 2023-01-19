class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans=0;
        
         int rows=matrix.size();
        int cols=matrix[0].size();
        int countNegative=0;
        int mini=INT_MAX;
        
         
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                ans+=abs(matrix[i][j]);
                mini=min(mini,abs(matrix[i][j]));
                if(matrix[i][j]<0)countNegative++;
            }
        }
        
        if(countNegative%2==0)return ans;
        else{
            ans-=abs(mini)+mini;
        }
        
        return ans;
    }
};