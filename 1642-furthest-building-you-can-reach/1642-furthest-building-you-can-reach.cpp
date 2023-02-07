class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        int i=-1;
        priority_queue<int>pq;
        int in_ladd=ladders;
        int in_brick=bricks;
        
        for(i=1;i<heights.size();i++){
            
            if(heights[i]>heights[i-1]){
                int diff=heights[i]-heights[i-1];
                pq.push(diff);
                bricks-=diff;
                
                if(bricks<0){
                    bricks+=pq.top();
                    pq.pop();
                    ladders--;
                }
               
                if(ladders<0)break;
        }
    } 
       return i-1;
    
   }
};