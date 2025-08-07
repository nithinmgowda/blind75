/* most simplest and the easiest dynamic programming question ever 
you have given an array nums and u should check wheather the u can reach the end or not by jumping 
and the catch is u can only jump the amount of times according to the value present at the index you are in

lets make it simple think you are a frog in pond and the lotus leaves are the indexes
and the insects on the lotus leaves determine your jumping ability 
so if there are 2 insects u can jump 2 times there is no stopping u to jump only once in this case 
but u cannot jump more than the insects present*/


class Solution {
    public:
    bool canjump(vector<int>& nums){
        int n = nums.size();
        int goal = n - 1;

        for(int i = n - 2; i>=0; i--){
            if(i + nums[i] >= goal){
                goal = i;
            }
        }
        return goal == 0;
    }
}