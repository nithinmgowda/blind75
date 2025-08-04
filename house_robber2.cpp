/* same as the problem house robber but a tiny bit difference here that is the arr is visualised as circular socity 
so first element and last element are next to each other you get the gist*/

// lets get into code

class Solution {
    private:
    int kalmindri(vector<int>& nums, int start, int end){
        int prevrob = 0, maxrob = 0;
        for(int i = start; i <= end; i++){
            int temp = max(prevrob + nums[i], maxrob);
            prevrob = maxrob;
            maxrob = temp;
        }
        return maxrob;
    }
    public:
    int rob(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums[0];
        return max(kalmindri(nums, 0, n - 2), kalmindri(nums, 1, n - 1));
    }
};

// var names are just for some pun 