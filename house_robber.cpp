/*You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.*/

/*
if i were a thief i would probably steal my crushs's heart lol
but which crush would be the question 

ok so in this question we have to rob a society which is an array of houses with money
ex  arr = [ 1 , 4, 5 ,6 ,8]  the robber can only rob i and i+2 he cannot rob houses next to each other or he is fucked*/


//we have to solution both are given


class Solution {
    public:
        int rob(vector<int>& nums){
            int n = nums.size();

            if(n == 1) return nums[0];

            vector<int> robber(n , 0);
            robber[0] = nums[0];
            robber[1]  = max(nums[0], nums[1]);
            for(int i = 2; i< n; i++){
                robber[i] = max(robber[i-1], robber[i-2]+nums[i]);
            }
                return robber[n - 1];
        }
        
};


// solution 2

class Solution {
    public:

    int rob(vector<int>& nums){
    int prevrob = 0;
    int maxrob = 0;

    for(int currvalue : nums){
        int temp = max(maxrob, prevrob + prevrob);
        prevrob = maxrob;
        maxrob = temp;
    }
    return maxrob;
    }
};