class Solution {
public:
    
    int calculate(vector<vector<int>>& students,vector<vector<int>>&mentors,int si,int mi){
        int comp=0;
        
        for(int i=0;i<students[si].size();i++){
            if(students[si][i]==mentors[mi][i])comp++;
        }
        
        return comp;
    }
    
    void Comp(vector<vector<int>>& students,vector<vector<int>>&mentors, int &res,int score,int index,vector<bool>&mentors_Available){
        
        int n=students.size();
        
        if(index>=n){
            res=max(res,score);
            return ;
        }
        
        
        for(int i=0;i<n;i++){
            if(mentors_Available[i]==0){
                mentors_Available[i]=1;
                int compatability=calculate(students,mentors,i,index);
                Comp(students,mentors,res,score+compatability,index+1,mentors_Available);
                
                mentors_Available[i]=0;
            }
        }
        
    }
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int score=0;
        int res=0;
        int index=0;
        
        vector<bool>mentors_Available(mentors.size(),0);
        
        Comp(students,mentors,res,score,index,mentors_Available);
        
        return res;
    }
};