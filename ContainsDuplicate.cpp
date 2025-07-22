class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>meSet;
            for(int i=0; i<nums.size(); i++){
                if(meSet.count(nums[i])){
                    return true;
                }else{
                    meSet.insert(nums[i]);
                }
                return false;
                }
            };