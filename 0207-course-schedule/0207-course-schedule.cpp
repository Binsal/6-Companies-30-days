class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<int>adj[numCourses];
        vector<int>v;
        
        for(int i=0;i<pre.size();i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        
        vector<int>indegree(numCourses);
        queue<int>q;
        
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        
        while(!q.empty()){
            int val=q.front();
            v.push_back(val);
            q.pop();
            
            for(auto it:adj[val]){
                indegree[it]--;
                
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        
        if(v.size()==numCourses)return true;
        return false;
    }
};