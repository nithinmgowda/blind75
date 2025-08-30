#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number the range: \n";
    cin >> num;
    int a = 0 , b = 1 , next;


    cout <<a<<","<<b<<",";

    for(int i = 2; i < num; i++){
        next = a+b;
        a = b;
        b - next;


        cout << next<<",";

        return 0;

    }
}


//recursion 


int fib(int n ){
    static int a 0 , b = 1, next;

    if(n > 0){
        next = a + b ;
        a = b;
        b = next;
        
        cout <<next << ",";

        fib(n -1);
}   
}
int main(){
    int num;
    cout<<"Enter the range of the series\n";
    cout<<" 0 , 1, ";
    cin>>num;

    fib(num - 2);

    return 0;
}
