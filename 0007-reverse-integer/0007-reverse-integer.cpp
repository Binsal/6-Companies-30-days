class Solution {
public:
    int reverse(int x) {
        bool flag=0;
        if(x<0){
            flag=1;
            x=abs(x);
        }
        
        long long int ans=0;
        
        while(x){
            int rem=x%10;
            ans=ans*10+rem;
            if(ans<-(pow(2,31)) || ans>=pow(2,31)){
                ans=0;
                break;
            }
            x=x/10;
        }
        
        if(flag){
            ans=-ans;
        }
        
        return (int) ans;
    }
};