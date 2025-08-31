//factorial of a number

#include<bits/stdc++.h>
using namespace std;

int factorial(int num){

    if( num == 0 || num == 1) return 1;

    return num * factorial(num - 1);



}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin >> num;

    factorial(num);

    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
}