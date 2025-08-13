/* here u are given a string and u have to find the longest substring 
without character repition

for ex lets say "nithinisnithin" here the longest being nithin and the output should be the length 

there fore it being 6*/


class Solution{
    public:

    int lengthofSubstring(string s){
        int left = 0;
        int maxlength = 0;
        unordered_set<char> charset;

        for(int right=0; right<s.length(); right++){
            while(charset.find(s[right])!=charset.end()){
                charset.erase(s[left]);
                left++;
            }
            charset.insert(s[right]);
            maxlength = max(maxlength , right - left + 1);
        }
        return maxlength;
    }
};