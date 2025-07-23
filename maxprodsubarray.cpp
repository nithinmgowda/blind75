//code for maximum product subarray similar to maximum subarray problem 

// man i really thought just by replacing the "+" in the solution to maximum subarray problem with "*" would work lol..


class Solution{
    public:

    int maxProduct(vector<int>& nums){
        int res = *max_element(nums.begin(), nums.end());
        int currentmax =1, currentmin = 1;

        for(int n : nums){
            int temp = currentmax*n;
            currentmax = max({temp,currentmax * n, n});
            currentmin = min({temp,currentmin * n, n});

            res = max(res, currentmax);
        }
        return res;
    }
}