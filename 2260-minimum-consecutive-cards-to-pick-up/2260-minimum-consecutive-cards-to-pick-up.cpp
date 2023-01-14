class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        int mini=INT_MAX;
        unordered_map<int,vector<int>>mp;
        
        for(int i=0;i<cards.size();i++){
           mp[cards[i]].push_back(i);
        }
        
        for(auto x:mp){
            auto vec=x.second;
            if(vec.size()==1){
                continue;
            }
            else{
                sort(vec.begin(),vec.end());
                
                for(int i=0;i<vec.size()-1;i++){
                    mini=min(mini,abs(vec[i]-vec[i+1]));
                }
            }
          
        }
        
        if(mini==INT_MAX)return -1;
        
        return mini+1;
    }
};