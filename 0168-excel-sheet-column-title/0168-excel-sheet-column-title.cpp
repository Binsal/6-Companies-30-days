class Solution {
public:
    string convertToTitle(int columnNumber) {
       
        
        string str="";
        
        while(columnNumber){
            columnNumber--;
            char temp='A'+(columnNumber%26);
            str=temp+str;
            columnNumber=columnNumber/26;
        }
        
        return str;
    }
};