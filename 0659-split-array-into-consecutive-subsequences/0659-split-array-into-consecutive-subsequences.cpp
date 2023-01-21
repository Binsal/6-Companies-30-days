class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        int count=0;
        map<int,int>mp;
        int maxfreq=0;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:nums){
            
            if(mp[it]==0) continue;
            
            maxfreq=mp[it];
            count=0;
            int curr=it;
            
            
                while(maxfreq<=mp[curr]){
                    maxfreq=mp[curr];
                    mp[curr]--;
                    count++;
                    curr++;
                }
                
  
            if(count<3) return false;
        }
        
        return true;
    }
};