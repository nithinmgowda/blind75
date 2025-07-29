// find the ways to climb stairs 
// while u can only take 1 or 2 steps at a time

// if there are 4 stairs (n = 4)
// you can climb them in the following ways;
// 1, 1,1,1
// 1,1,2
// 1,2,1
//2, 1,1,
//2, 2

class Solution {
    public:

    int climbstairs(int n){
        if(n == 1 || n == 0 ){
            return 1;
        }

        int prev = 1, curr = 1;
        for(int i= 2; i<= n; i++){
            int temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        return curr;
    }
}