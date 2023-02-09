class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> n;
        for(int i=0;i<nums.size();i++){
            n.insert(nums[i]);
        }
        
        if(n.size()!=nums.size()){
            return 1;
        }
        
        return 0;
    }
};