// To print a pattern of stars in a pyramid shape

  // but y do this its simple enough ryt? simple but most important but why? logic building 
  // these builds the thinking process of a programmer which later on makes it easier for pattern recognition
  // problem sloving and many more things

  #include<bits/stdc++.h>
  using namspace std;
  
  int main{
    int rows;
    cout << "Enter the number of rows"<<endl;
    cin >> rows;

    for(int i = 0; i< rows; i++){
        for(int j = 0; j< i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
  };