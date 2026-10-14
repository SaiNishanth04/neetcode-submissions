class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(auto it:nums){
            freq[it]++;
        }
        vector<int> ans;
        vector<pair<int,int>> vals(freq.begin(),freq.end());
        sort(vals.begin(),vals.end(),
            [](const auto &a,const auto &b){
                return a.second > b.second;
            });

        for(int i=0;i<k;i++){
            ans.push_back(vals[i].first);
        }

        return ans;

    }
};
