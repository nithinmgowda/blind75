#include <bits/stdc++.h>
using namespace std;
    
    void checkNumber(int num1){
        
        if( num1%2 == 0){
            cout<<"the number is even"<<endl;
        }
        else{
            cout<<"the number is odd"<<endl;
        }
        
        
    }
int main() {
	int number;
	cout<<"Enter the number to be checked"<<endl;
	cin >> number;
        checkNumber(number);
        
        return 0;
}
