class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        
       
        vector<int>color(graph.size(),0);
     
        
    for(int i=0;i<graph.size();i++){
        
        if(color[i]==1 || color[i]==-1)continue; 
        
        queue<int>q;
        q.push(i);
        
        if(color[i]==0){
            color[i]=1;
        }
        
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            
            for(auto j:graph[ele]){
              
                if(color[j]==0){
                color[j]=-color[ele];
                 q.push(j);
                
                }
                else if(color[j]==color[ele])return false;
            }
       }
        
    }
         
     return true;
    }
};