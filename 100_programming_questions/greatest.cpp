#include <bits/stdc++.h>
using namespace std;


 void greatest(int a, int b){
     if(a > b)cout<<"A is greater"<<endl;
     else cout<<"b is greater"<<endl;
 }

int main() {
	int a , b;
	cout << "enter the numbers"<<endl;
	cin >> a >> b;
	
	
	greatest(a , b);

}




// for three numbers


#include <bits/stdc++.h>
using namespace std;


 void greatest(int a, int b, int c){
     if(a > b && a > c){
         cout<<"A is the greatest"<<endl;
     }
     else if(c > b && a < c) {
         cout<<"C is the greatest"<<endl;
     }
     else if(a < b && c < b){
         cout<< "B is the greatest"<<endl;
     }
 }

int main() {
	int a , b , c;
	cout << "enter the numbers"<<endl;
	cin >> a >> b >> c;
	
	
	greatest(a , b ,c);

}
