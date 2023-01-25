class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxi=0;
        
        if(piles.size()==3){
            sort(piles.begin(),piles.end());
            return piles[1];
        }
        
        sort(piles.begin(),piles.end());
//         vector<int>vec;
        
       // for(int i=0;i<piles.size();i++){
            // vec.push_back(piles[i]);
            // while(piles[i]==piles[i+1])i++;
            
            
       // }
        
//         int i=1;
        
//         while(i<vec.size()){
//             //<<vec[i];
//             maxi+=vec[i];
//             i=i+2;
            
//         }
        
        
        int ind=piles.size()/3;
        
        for(int i=piles.size()-2;i>=ind-1;i=i-2){
            maxi+=piles[i];
        }
        
        return maxi;
       
    }
};