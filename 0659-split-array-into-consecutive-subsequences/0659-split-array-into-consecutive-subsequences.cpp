class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int>mp;
        
        
        for(auto it:nums){
            mp[it]++;
        }
        
        for(auto it:nums){
           
            if(mp[it]==0){
                continue;
            }
            
             int curr=it;
            int count=0;
            int freq=mp[it];
            
            while(freq<=mp[curr]){
                freq=mp[curr];
                 mp[curr]--;
                count++;
                curr++;
                
            }
            
            if(count<3)return false;
        }
        return true;
    }
};