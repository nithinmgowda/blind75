// why am i just add blind75 questions rather than grouping them as patterns

// thats cause i want to understand the patterns better
// how?? see if they are grouped i can only see one pattern but if not 
// i can even put a big ass if else statements and solve the questions lol any way

// given two strings of different length and characters u gotta find the common subseqeunce 
// meaning same sub string from each which is longest 

// input text1 = kadlepuri  text2 = kadle , output = 5;
// henge?? nivu text1 madhe text2 li nod bohdhu "kadle" yerdu strings alli kuda baruthe so subsequence which is common


class Solution {
    public:

    int longestcommonsubsequence (string text1, string text2){
        vector<int> moxie(text1.length(), 0);
        int roxie = 0;

        for(char c : text2){
            int poxie = 0;

            for(int i = 0; i < moxie.size(); i++){
                if(poxie < moxie[i]){
                    poxie = moxie[i];
                }else if(c == text1[i]){
                    moxie[i] = poxie + 1;
                    poxie = max(roxie , poxie + 1);
                }
                
            }
        }
        return roxie;
    }
};

// the variable names are just for fun, so u can use the below code for better understanding

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> dp(text1.length(), 0);
        int longest = 0;

        for (char c : text2) {
            int curLength = 0;
            for (int i = 0; i < dp.size(); i++) {
                if (curLength < dp[i]) {
                    curLength = dp[i];
                } else if (c == text1[i]) {
                    dp[i] = curLength + 1;
                    longest = max(longest, curLength + 1);
                }
            }
        }

        return longest;        
    }
};