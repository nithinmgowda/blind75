#include <bits/stdc++.h>
using namespace std;

     void leapyear(int year){
         if( year % 4 == 0){
             std::cout << "The entered year is a leapyear" << std::endl;
         }
         else{
             std::cout<<"The entered year is not a leap year"<<std::endl;
         }
     }

int main() {
    int year;
    cout<< "Enter the year to be checked"<<endl;
    cin >>year;
    
    leapyear(year);
    
}
