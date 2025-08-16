/* convert the given int columnNumber to string equivalent of it

input A = 1
input z = 26
input AA = 27*/

class solution{
    public:
    string Convertotitle(int columnNumber){
        cin >> columnNumber;
        string res = "";

        while(columnNumber > 0){
            columnNumber--;
            result = char('A' + columnNumber % 26) + result;
            columnNumber /= 26;
        }
        return result;
    }
}