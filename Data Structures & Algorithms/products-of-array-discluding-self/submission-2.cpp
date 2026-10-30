class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),pre_prod=1,suff_prod=1;
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            ans[i]=pre_prod;
            pre_prod*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]*=suff_prod;
            suff_prod*=nums[i];
        }
        
        
        return ans;
    }
};
