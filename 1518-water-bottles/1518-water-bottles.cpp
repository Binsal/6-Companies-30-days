class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        
        if(numBottles<numExchange)return numBottles;
        
        // if(numBottles%numExchange){
        //     count+=1;
        // }
        
        while(numBottles){
            count+=numBottles/numExchange;
            int rem=0;
            if(numBottles>numExchange){
                rem=numBottles%numExchange;
            }
            numBottles=numBottles/numExchange;
            numBottles+=rem;
            //cout<<numBottles<<endl;
        }
        
        return count;
    }
};