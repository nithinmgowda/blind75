// three sum a lil bit different form two sum 
// here u return a array of element from an arrary where these elements are unique and sum to zero


class Solution {
    public:

    vector<vector<int>> threesum(vector<int>& nums){
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i]==nums[i-1]){
                continue;
            }
            int j = i+1, k = n-1;
            while(j < k){
                int otter = nums[i]+nums[j]+nums[k];
                if(otter < 0){
                    j++;

                }else if(otter > 0){k--;}
                else{
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                while(nums[j]==nums[j+1] && j<k){
                    j++;
                }
                }
            }
            return res;
        }
    }
};