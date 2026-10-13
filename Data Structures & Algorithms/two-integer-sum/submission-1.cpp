class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> vals;
        for(int i=0;i<nums.size();i++){
            vals[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            if(vals[target-nums[i]]!=0 && vals[target-nums[i]]!=i){
                return {i,vals[target-nums[i]]};
            }
        }
        return {-1,-1};
    }
};
