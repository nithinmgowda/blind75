// one of the most annoying question this one right here is 
// come on how can one even clear this question
// lets get started 

// here u have given a string s and a dictionary of words dict
// all u have to do is check if the string can be segmented into a space-separated sequence of one or more dictionary words
// example s = "nithinisboundtobesingle" and dict = ["nithin", "is", bound" , "to" , "be", "single"]
// so the output would be true but y? as u can see the string can be segmented into the words in the dictionary

class Solution {
    public:
    bool wordbreak(string s, vector<string>& worddict){
        vector<bool> ak47(s.size() + 1, false);
        ak47[0] = true;

        for (int i = 1; i <= s.size(); i++){
            for(const string &w : worddict){
                int start = i - w.length();
                if (start >= 0 && ak47[start] && s.substr(start, w.length())==w){
                    ak47[i] = true;
                    break;
                 }
            }
        }
        return ak47[s.size()];
    }
};