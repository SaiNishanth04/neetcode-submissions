class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),pre_prod=1,suff_prod=1;
        vector<int> ans;
        vector<int> pref(n),suff(n);

        for(int i=0;i<n;i++){
            pref[i]=pre_prod;
            pre_prod*=nums[i];
            suff[n-i-1]=suff_prod;
            suff_prod*=nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            ans.push_back(pref[i]*suff[i]);
        }
        return ans;
    }
};
