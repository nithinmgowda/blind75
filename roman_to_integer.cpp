/* roman to integer simple enough*/

// code

class Solution {
    public:

    int romantoint(string s){
        unordered_map<char , int> rm = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M', 1000}
        };

        int res = 0;
        cin >> s;

        for(int i = 0; i<n; i++){
            if(i<n - 1 && rm[s[i]] <rm[s[i+1]]){
                res -=rm[s[i]];

            }else{
                res += rm[s[i]];
            }
        }
        return res;
    }
};



//solution 2 


class Solution {
    public:

    int getval (char c){
        swtich(c){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
        int romantoint(string s){
            int res = 0;
            int n = s.length();
            cin>> s;

            for(int i = 0; i < n; i++){
                int curr = getval(s[i]);
                int next = (i < n - 1) ? getval(s[i+1]):0;

                if(curr <next){
                    res -= curr;
                }
                else{
                    res += curr;
                }
            }
            return res;
        }
    }
};