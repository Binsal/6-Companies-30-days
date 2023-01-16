class Solution {
public:
    
    long long merge(int l,int r,vector<int>&nums,int diff){
        if(l==r)return 0;
        long long ans=0;
        
        int mid=(l+r)/2;
        
        ans+=merge(l,mid,nums,diff)+merge(mid+1,r,nums,diff);
        
        int l1=l,r1=mid,l2=mid+1,r2=r;
        
        for(int i=l2;i<=r2;i++){
            int max_allow=nums[i]+diff;
            int ind=upper_bound(nums.begin()+l1,nums.begin()+r1+1,max_allow)-nums.begin()-1;
            if(ind<=r1){
                ans+=ind-l1+1;
            }
        }
        
        vector<int>merged;
        
        while(l1<=r1 && l2<=r2){
            if(nums[l1]<nums[l2]){
                merged.push_back(nums[l1]);
                l1++;
            }
            else{
                merged.push_back(nums[l2]);
                l2++;
            }
        }
        
        while(l1<=r1){
            merged.push_back(nums[l1]);
            l1++;
        }
        
        while(l2<=r2){
            merged.push_back(nums[l2]);
            l2++;
        }
        
        for(int i=l;i<=r;i++)nums[i]=merged[i-l];
        return ans;
    }
    
    long long numberOfPairs(vector<int>& nums, vector<int>& nums2, int diff) {
       
        int n=nums.size()-1;
        
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-nums2[i];
        }
        
        return merge(0,n,nums,diff);
    }
};