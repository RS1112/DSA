class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum=nums[0];
        res.push_back(sum);
        for(int i=1; i<nums.size(); i++){
            sum+=nums[i];
            res.push_back(sum);
        }
        return res;
    }
};