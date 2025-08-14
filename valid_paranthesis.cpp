/* quite a simple problem to understand since it doesnt has much complexity
 there is a string containing parantheses i.e (), {} ,[] 
 either of these is given u have to check wheather the open paranthesis and the close are same 
 if yes give true if not give false pretty simple 
 */

 class Solution{
    private:

    bool ispair(char last, char curr){
        return (last == '(' && curr == ')')||
               (last == '{' && curr == '}')||
               (last == '[' && curr == ']')
    } 
    public:
     bool isvalid(string s){
        stack<char> stake;

        for(char curr : s){
            if(!stake.empty()){
                char last = stake.top();
                if(ispair(last, curr)){
                    stake.pop();
                    continue;
                }
            }
            stake.push(curr);
        }
        return stake.empty();
     }  

 };