class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        vector<bool>visited(101,0);
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(nums[i]==nums[j]){
                    count++;
                    //visited[nums[i]]=1;
                }
            }
        }

        return count;
    }
};