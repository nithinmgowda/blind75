/* two strings are given to you that is "s" and "t" you should find wheather the string "t" 
is an anagram of "s"
anagram means both the words have same number of letters and if rearranged the word both s and t match*/

class Solution{
    public:

    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char , int> counter;
        
        for(char ch : s){
            counter[ch] = counter[ch]+1;
        }
        for(char ch : t){
            if(counter.find(ch) == counter.end() || counter[ch] == 0){
                return false;
            }
            counter[ch] = counter[ch] - 1;
        }
        return true;
    }
};