#include <bits/stdc++.h>
using namespace std;

bool isprimeNumber(int num){
    if(num <= 1) return false;
    
    else if( num == 2) return true;
    
    else if(num % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(num); i +=2 ){
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
	
	
	int num;
	cin >> num;
	
	if(isprimeNumber(num)){
	    std::cout << "the number is a prime number" << std::endl;
	}else{
	    cout<<"the number is not a prime number"<<endl;
	}

}
