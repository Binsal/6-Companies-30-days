class Solution {
public:
    
    void rec(string s,int i,vector<string>&vec,vector<vector<string>>&v){
         
        if(i==s.size()){
            v.push_back(vec);
            return ;
        }
        
     
        string str="";
        
        for(int j=i;j<s.size();j++){
           str+=s[j];
           string rev=str;
           reverse(rev.begin(),rev.end());
            
           if(str==rev){
                vec.push_back(str);
                rec(s,j+1,vec,v);
                vec.pop_back();
           }
       }
        
       
       // return 1; 
    }
    
    
    vector<vector<string>> partition(string s) {
        
        vector<int>dp(17,-1);
        vector<vector<string>>v;
        vector<string>vec;
        
        rec(s,0,vec,v);
        
        return v;
    }
};