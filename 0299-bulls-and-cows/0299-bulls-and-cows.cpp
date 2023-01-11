class Solution {
public:
    string getHint(string secret, string guess) {
        int x=0;
        int y=0;
       
        vector<int>v1(10,0);
        vector<int>v2(10,0);
       
        
        for(int i=0;i<guess.size();i++){
           
            
            if(secret[i]==guess[i]){
               x++;
            }
            else{
                v1[secret[i]-'0']++;
                v2[guess[i]-'0']++; 
            }
        }
        
        
        for(int i=0;i<10;i++){
            y+=min(v1[i],v2[i]);
        }
        
        // cout<<x<<endl;
        // cout<<sz<<endl;
        
       
        string str=to_string(x);
        str+="A";
        str+=to_string(y);
        str+="B";
        
        
        return str;
    }
};