// u will be given an array of n distinct integers
// from 0 to n 
// all u have to do is find the missing number

// ex nums = [0, 3, 4, 1]
// here the missing numbre is 2 cause n = 4 
// and the only missing number from range 0 to 4 is 2 


class Solution {
    public:

     int missingnumber(vector<int>& nums){
        int n = nums.size();

        for(int i = 0; i < n; i++){
            n += i - nums[i];
        }
        return n;
     }
};