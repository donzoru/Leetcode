class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> ans;
        ans.clear();
        for(int i=0;i<nums.size();++i){
            if(hash.find(target-nums[i]) != hash.end()){
                ans.push_back(hash[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            hash[nums[i]]=i;
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
