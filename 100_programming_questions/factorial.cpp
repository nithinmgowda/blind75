#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num, fact = 1;
    cin >> num;
    
    if(num < 0)
        cout << "Not Possible";
    else
    {
        for(int i = 1; i <= num; i++)
            fact = fact * i;
    }
    
    cout << "Fact " << num << ": " << fact;
}