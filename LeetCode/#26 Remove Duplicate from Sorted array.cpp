class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else{
                nums[count]=nums[i+1];
                count+=1;
            }
        }
        return count;
    }
};