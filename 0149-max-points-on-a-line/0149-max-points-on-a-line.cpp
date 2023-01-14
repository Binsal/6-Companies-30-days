class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxi=0;
        
        
        for(int i=0;i<points.size()-1;i++){
            
            unordered_map<double,int> mp;
            for(int j=i+1;j<points.size();j++){
                
                if(points[i][0]==points[j][0]){
                    mp[10001]++;
                }
                else{
                    int dy=points[j][1]-points[i][1];
                    int dx=points[j][0]-points[i][0];   
                    double slope=dy*1.0/dx;

                    mp[slope]++;
                }
                
                  for(auto x:mp){
                    maxi=max(maxi,x.second+1);
                  } 
            }
            
        }
        
      
        return max(1,maxi);
    }
};