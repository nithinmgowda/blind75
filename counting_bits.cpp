// similar to the number of set bits 
// here u count the number of bits that are set in each numbers from 0 to n

class Solution {
    public:
     vector<int> countbits(int n){
        vector<int> ans(n+1, 0);

        for(int i = 1; i <= n; i++){
            ans[i]= ans[i >> 1] + (i & 1);
        }
        return ans;
     }
};
