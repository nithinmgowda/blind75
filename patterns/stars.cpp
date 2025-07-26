//print a square star

//    *****
//    *****
  //  *****
   // ***** //*
#include<bits/stdc++.h>
using namespace std;

int main(){
   int cols;
   int rows;
   cout<< "Enter the number of columns and rows;"<<endl;
   cin >> cols >> rows;

   for(int i = 0; i< rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"*";
        }
        cout<<endl;
   }
};