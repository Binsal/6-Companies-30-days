class Solution {
public:
    int findTheWinner(int n, int k) {
//         vector<int>v;
//         vector<int>::iterator it;
        
//         for(int i=0;i<n;i++){
//             v.push_back(i);
//         }
//         int out=k;
        
//         if(out>=n)out=out%n;
        
//         while(v.size()>1){
            
//                 it=v.begin();
//                 v.erase(it+out-1);
//                 out=out+k+1;
                
//                  if(out>=n){
//                     out=out%n;
//                 }
//         }
        
        
//         if(k==1)return n;
        
        
//         int multiple=(n-1)*k;
//         int ind=multiple%n;
        
        int ind=k-1;
        
        for(int i=1;i<=n;i++){
            ind=(ind+k)%i;
        }
         
        return ind+1;
    }
};