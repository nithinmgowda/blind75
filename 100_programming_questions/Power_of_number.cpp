#include<bits/stdc++.h>
#include<math.H>

using namespace std;
int power(double base ; int expo;){
 double result;

    cout<<"Enter the base and exponent : ";
    cin >> base >> expo;

    while(expo != 0){
        result *= base;
        expo--;
    }
    while(expo < 0){
        result /= base;
        expo++;
    }
    cout <<"The Resulting Power is  "<<result<<endl;
    return 0;
}

int main(){
    cout <<"the result is "<power(2 , 4)<<endl;
    return 0;
    
}