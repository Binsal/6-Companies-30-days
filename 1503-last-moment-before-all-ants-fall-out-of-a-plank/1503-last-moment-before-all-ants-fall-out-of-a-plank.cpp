class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
        int t=0;
        
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        
        if(left.size()==0){
            return n-right[0];
        }
        
        if(right.size()==0){
            return left[left.size()-1];
        }
        
        if(left.size()==1 && right.size()==1){
            if(left[0]>right[0]){
                return max(left[0],n-right[0]);
            }
        }
        
        for(int i=0;i<left.size();i++){
            t=max(t,left[i]);
        }
        for(int j=0;j<right.size();j++){
            t=max(t,n-right[0]);
        }
        return t;
    }
};