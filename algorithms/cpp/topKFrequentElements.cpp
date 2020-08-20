class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k==nums.size()) return nums;
        vector<int> result;
        
        sort(nums.begin(), nums.end());
        auto cmp = [](pair<int, int>& a, pair<int, int>& b){
            return a.second < b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> PQ(cmp);
        int x = nums[0], n=nums.size(), pos=0;
        for(int i = 0; i<n; ++i){
            if(nums[i] != x){
                PQ.push({x, i-pos});
                x=nums[i];
                pos=i;
            }
        }
        PQ.push({nums.back(), n-pos});
        
        for(int i = 0; i<k; ++i){
            result.push_back(PQ.top().first);
            PQ.pop();
        }
        return result;
        
    }
};
