class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int count=0;
        
//         int l=0;
//         int h=0;
        
//         while(h<nums.size()){
            
            
            
//         }
        
        set<vector<int>>st;
        int divisible=0;
        
        for(int i=0;i<nums.size();i++){
            int divisible=0;
            vector<int>v;
            
            for(int j=i;j<nums.size();j++){
                
                if(nums[j]%p==0)divisible++;
                if(divisible<=k){
                    v.push_back(nums[j]);
                    st.insert({v});
                }
                else{
                    
                    break;
                }
            }
            
        }
        
        return st.size();
    }
};