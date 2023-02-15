// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
//         int maxi=0;
//         int i=0;
//         int j=0;
//         int count=0;
        
//         vector<int>sum(grumpy.size(),0);
//         int s=0;
        
//         for(int k=0;k<grumpy.size();k++){
//             if(grumpy[k]==0){
//                 s+=customers[k];
//             }
//             sum[k]=s;
//         }
        
//         //for(int i=0;)
        
//         while(j<grumpy.size()){
            
//             if(grumpy[j]==1){
//                 count++;
//             }
            
//             while(){
                
//             }
            
//             maxi=max(maxi,sum[j]-sum[i]);
//             j++;
//         }
        
//         return maxi;
        
//     }
// };
class Solution {
public:
int maxSatisfied(vector<int>& cs, vector<int>& grumpy, int X) {
    auto satisfied = 0, m_add_satisfied = 0, add_satisfied = 0;
    for (auto i = 0; i < cs.size(); ++i) {
        satisfied += !grumpy[i] * cs[i];
        add_satisfied += grumpy[i] * cs[i];
        if (i >= X) 
            add_satisfied -= grumpy[i - X] * cs[i - X];
        m_add_satisfied = max(m_add_satisfied, add_satisfied);
    }
    return satisfied + m_add_satisfied;
}
};