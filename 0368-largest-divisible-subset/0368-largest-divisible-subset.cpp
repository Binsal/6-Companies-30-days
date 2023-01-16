class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int>v;
        vector<int> hash(nums.size(),0);
        vector<int>dp(nums.size(),1);
        int maxi=1;
        int last_index=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            hash[i]=i;
            
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    hash[i]=j;
                }
                
                if(dp[i]>maxi){
                    maxi=dp[i];
                    last_index=i;
                }
            }
            
        }
        
        v.push_back(nums[last_index]);
        
        while(hash[last_index]!=last_index){
            last_index=hash[last_index];
            v.push_back(nums[last_index]);
        }
        
        return v;
    }
};