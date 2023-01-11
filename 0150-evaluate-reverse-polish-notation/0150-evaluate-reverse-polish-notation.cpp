class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"|| tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-")             {
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.pop();
                
                if(tokens[i]=="+"){
                    int val=val1+val2;
                    st.push(val);
                }
                else if(tokens[i]=="-"){
                    int val=val2-val1;
                    st.push(val);
                }
                else if(tokens[i]=="*"){
                    int val=val1*val2;
                    st.push(val);
                }
                else if(tokens[i]=="/"){
                    int val=val2/val1;
                    st.push(val);
                }
            }
            else{
                int str=stoi(tokens[i]);
                st.push(str);
            }
        }
        
        int ans=st.top();
        return ans;
    }
};