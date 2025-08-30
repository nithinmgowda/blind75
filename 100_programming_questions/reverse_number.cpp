#include<bits/stdc++.h>
using namespace std;

void palindromeNumber(int num){
    int reversed = 0;

    while(num != 0){
        int digit = num % 10;
        reversed += digit * 10;
        num /= 10;
    }
    if( num == reversed) return true;
    else return false;
}

int main(){}

    int number;
    cout << "Enter a number to be checked : ";
    cin >> number;
    palindromeNumber(number);
    return 0;