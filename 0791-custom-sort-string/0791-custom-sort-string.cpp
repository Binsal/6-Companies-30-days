class Solution {
public:
    string customSortString(string order, string s) {
        string str="";
        
        
        map<char,int>mp;
        
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        
        string substr="";
        string substr2="";
        
        vector<int>vec;
        
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                vec.push_back(mp[s[i]]);
            }
            else{
                substr2+=s[i];
            }
        }
        
        
        sort(vec.begin(),vec.end());
        
        for(int i=0;i<vec.size();i++){
            substr+=order[vec[i]];
        }
        
        str=substr+substr2;
        return str;
    }
};