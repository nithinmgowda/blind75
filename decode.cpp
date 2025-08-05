/* a string of number is encoded all u have to decode the number
 input s = '12' output = 2
 intput s = '226' ouput = 3
 */

 class Solution {
    public:
    int numdecoding(string s){
        if(s[0] = '0')return 0;

        int n = s.length();
        vector<int> dp(n + 1, 0);
        dp[0]=dp[1]= 1;

        for(int i = 2; i<= n; i++){
            int one = s[i-1] - '0';
            int two = stoi(s.substr(i - 2, 2));

            if(one >= 1 && one <= 9){
                dp[i] += dp[i - 1];

            }
            if(10<= two && two <= 26){
                dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
 };