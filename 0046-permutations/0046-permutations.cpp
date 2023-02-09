class Solution {
public:
    
    void rec(vector<int>&nums,vector<vector<int>>&v,vector<int>&vec,vector<bool>&taken){
        if(vec.size()==nums.size()){
            v.push_back(vec);
        }
        
         for(int i=0;i<nums.size();i++){
            if(taken[i]==0){
            vec.push_back(nums[i]);
            taken[i]=1;
            rec(nums,v,vec,taken);
            vec.pop_back();
            taken[i]=0;
        }
        
    }
        
}       
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>vec;
        vector<bool>taken(nums.size(),0);
        
        for(int i=0;i<nums.size();i++){
            
            vec.push_back(nums[i]);
            taken[i]=1;
            rec(nums,v,vec,taken);
            vec.pop_back();
            taken[i]=0;
        }
        
        return v;
    }
};