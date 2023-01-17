class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        
       if(n==1){
           return 1.00000;
       }
       else if(n==2){
           return 0.50000;
       }
       else {
           return 1.0/2.0;
       }
    }
};