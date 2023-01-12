class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int>mp;
        int count=0;
        
        for(auto it:rectangles){
            mp[{it[0],it[1]}]++;
            mp[{it[0],it[3]}]--;
            mp[{it[2],it[1]}]--;
            mp[{it[2],it[3]}]++;
        }
        
        for(auto it:mp){
            count+=abs(it.second);
        }
        
        if(count==4)return true;
        return false;
    }
};