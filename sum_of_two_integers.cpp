// add two integers without using + or - operators 
// kya?? then how to solve????

// we use bitwise operations such as XOR and AND  to achive this 
// what does XOR do? it adds two bits but without carrying 
// what does AND do? it gives us the carry bits

//using these two in combination we can get the solution to this question


class Solution {
    public:

    int getSum(int a , int b){
        while(b!= 0){
            int sum = a^b;
            int carry = (a & b) << 1;
            a = sum;
            b = carry;
        }
        return a;
    }
};

// such a simple solution but effective as f with 
//time complexity of O(32) and space complexity of O(1)..