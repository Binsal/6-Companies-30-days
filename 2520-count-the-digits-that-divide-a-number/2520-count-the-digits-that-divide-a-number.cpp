class Solution {
public:
    int countDigits(int num) {
        int count=0;
        
        int n=num;
        
        while(n){
            int rem=n%10;
            n=n/10;
            
            if(num%rem==0){
                count++;
            }
        }
        
        return count;
    }
};