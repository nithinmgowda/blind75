// most simple problem 
// given a number reverse the bits 

class Solution {
    public:
    uint32_t reversebits(uint32_t n){
        uint32_t ans = 0;
        for(int i = 0; i < 32; i++){
            ans <<=1;
            ans |= (n & 1);
            n >>= 1;
        }
        return ans;
    }
};