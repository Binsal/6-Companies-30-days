//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        vector<int>v(26,0);
        int mini=INT_MAX;
        
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        
        string str="balloon";
        int count=INT_MAX;
        
        for(int i=0;i<str.size();i++){
            if(str[i]=='l'){
                count=min(count,(v[str[i]-'a'])/2);
            }
            else if(str[i]=='o'){
                count=min(count,(v[str[i]-'a'])/2);
            }
            else{
            count=min(count,v[str[i]-'a']);
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends