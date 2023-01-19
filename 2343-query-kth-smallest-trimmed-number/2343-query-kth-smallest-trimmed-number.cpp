class Solution {
public:
    
 
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>v;
        
         for(auto q:queries){
            vector<pair<string,int>>vec;
             
             for(int j=0;j<nums.size();j++){
                 vec.push_back({nums[j].substr(nums[j].size()-q[1]),j});
             }
             
             sort(vec.begin(),vec.end());
             
             v.push_back(vec[q[0]-1].second);
         }
        
        return v;
    }
};