class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int count=0;
            
        
        for(int i=0;i<points.size();i++){
          
              unordered_map<int,int>mp;
            
            for(int j=0;j<points.size();j++){
                int dist=pow(points[j][1]-points[i][1],2)+pow(points[j][0]-points[i][0],2);
                count+=mp[dist]*2;
                mp[dist]++;
            }  
             
          }

        return count;
    }
};