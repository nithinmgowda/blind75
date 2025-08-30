#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cout<<"Enter the number whose digits to be added"<<end;
	cin >> num;
	
	int sum =0;
	
	while(num != 0){
	    sum += num %10;
	    num / 10;
	}
	
	cout << " The sum of the digits of the given number"<<sum <<endl;
	
	
	return 0;
	
}
