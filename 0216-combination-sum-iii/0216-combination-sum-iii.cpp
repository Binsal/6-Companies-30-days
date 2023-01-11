class Solution {
public:
    
   
    void rec(vector<vector<int>>&v,vector<int>&vec,int k,int n,int ind,int val){
        
       
        
        if(k==0 && val==n){
            v.push_back(vec);
            
        }
        
        if(val>n){
            return ;
        }
        
        for(int i=ind;i<=9;i++){
            if(i>n){
                break;
            }
            vec.push_back(i);
            rec(v,vec,k-1,n,i+1,val+i);
            vec.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>v;
        vector<int>vec;
        int val=0;
        rec(v,vec,k,n,1,val);   
        return v;
    }
};