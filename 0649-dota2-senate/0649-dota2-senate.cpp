class Solution {
public:
    string predictPartyVictory(string senate) {
       
        queue<int>qr;
        queue<int>qd;

        for(int i=0;i<senate.size();i++){
           if(senate[i]=='R'){
               qr.push(i);
           }
           else if(senate[i]=='D'){
               qd.push(i);
           }
        }

        while(!qr.empty() && !qd.empty()){
           int r=qr.front();
           int d=qd.front();
             qr.pop();
             qd.pop();

           if(r<=d){
             
               qr.push(r+senate.size());
           }
           else {
               
               qd.push(d+senate.size());
           }
        }

        if(!qr.empty())return "Radiant";
        return "Dire";
    }
};