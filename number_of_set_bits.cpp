// find the set bits 
//set bits means the bits which are 1 simple

class Solution{
    public:
    int hammingweight(int n){
        int count = 0;
        while(n!=0){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};