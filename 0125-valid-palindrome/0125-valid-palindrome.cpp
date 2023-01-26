class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        
        for(int i=0;i<s.size();i++){
            if(!iswalnum(s[i])){
                continue;
            }
            else if(isupper(s[i])){
                str+=tolower(s[i]);
            }
            else if(s[i]==' ')continue;
            else{
                str+=s[i];
            }
        }
        
        string st=str;
        cout<<str<<endl;
        reverse(str.begin(),str.end());
        
        if((str==st))return true;
        return false;
    }
};