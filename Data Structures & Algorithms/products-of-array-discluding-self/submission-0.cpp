class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        vector<int> ans;
        for(auto it:nums){
            prod*=it;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                int new_prod=1;
                for(int j=0;j<nums.size();j++){
                    if(j!=i){
                        new_prod*=nums[j];
                    }
                }
                ans.push_back(new_prod);
            }
            else{
                ans.push_back(prod/nums[i]);
            }
        }
        return ans;
    }
};
