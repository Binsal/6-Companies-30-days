class Solution {
public:
    int trailingZeroes(int n) {
       int count5=0;
        
        while(n/5>=1){
            count5+=n/5;
            n=n/5;
        }
        
        return count5;
        
        
    }
};