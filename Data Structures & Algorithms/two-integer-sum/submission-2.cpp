class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> vals;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(vals.contains(x)){
                return {vals[x],i};
            }
            vals[nums[i]]=i;
        }

        
        return {-1,-1};
    }
};
