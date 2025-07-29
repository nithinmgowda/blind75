// one of the shittist problem ever 
// y do all this when u can just use greedy algo
// but this is a good practice for dynamic programming

class Solution{
    public:

    int coinChange(vector<int>& coins, int amount){
        vector<int> mincoins(amount + 1, amount + 1);
        mincoins[0] = 0;

        for(int i = 1; i<= amount; i++){
            for(int j = 0; j < coins.size(); j++){
                if(i - coins[j] >= 0){
                    mincoins[i] = min(mincoins[i], mincoins[i  - coins[i]]);
                }
            }
        }
        return mincoins[amount] != amount + 1 ? mincoins[amount] : -1;
    }
}