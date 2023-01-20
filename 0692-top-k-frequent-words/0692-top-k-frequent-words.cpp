class Solution {
public:
    
    static bool cmp(pair<string,int>p1,pair<string,int>p2){
        if(p2.second>=p1.second)return true;
        else return false;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        
        for(auto str:words){
            if(mp.find(str)!=mp.end()){
                mp[str]++;
            }
            else{
                mp.insert({str,1});
            }
        }
        
        vector<string>v;
        
       std::vector<pair<string,int>>vec;
 
    // copy key-value pairs from the map to the vector
    std::copy(mp.begin(),
            mp.end(),
            std::back_inserter<std::vector<pair<string,int>>>(vec));
 
    // sort the vector by increasing the order of its pair's second value
    // if the second value is equal, order by the pair's first value
    std::sort(vec.begin(), vec.end(),
            [](const pair<string,int> &l, const pair<string,int> &r)
            {
                if (l.second != r.second) {
                    return l.second>r.second;
                }
 
                return l.first < r.first;
            });
            
      
        
        for(int i=0;i<k;i++){
            v.push_back(vec[i].first);
        }
        
        return v;
    }
};