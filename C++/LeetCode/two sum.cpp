class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector <int> ans;
            for (auto i= nums.begin();i!=nums.end();++i){
                auto j = find(i+1,nums.end(),target-*i);
                if(j!=nums.end()){
                    ans.push_back(i-nums.begin());
                    ans.push_back(j-nums.begin());
                    break;
                }
            } 
            return ans;
        }
    };