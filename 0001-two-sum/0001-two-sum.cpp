class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int n=target-nums[i];

            auto it=find(nums.begin(),nums.end(),n);
            int index=it-nums.begin();

            if(index!=i){
                if(it!=nums.end()){
                    
                    v.push_back(i);
                    v.push_back(index);
                    break;

                }
            }
        }
        return v;

    }
};