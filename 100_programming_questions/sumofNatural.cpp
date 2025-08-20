#include <bits/stdc++.h>
using namespace std;
    
    int sumofNaturalnums(int range ){
        // n being till the last number to be added;
         int sum = 0;
        for(int i = 0; i < range ; i++){
            sum += i;
            
            
        }
        return sum;
   
 
        
    }
int main() {
    int range;
    cout<<"enter the range"<<endl;    
    cin>>range;
    
    int result = sumofNaturalnums(range);
    
    cout<<"the sum for the range: "<<range<< " || result: "<<result<<endl;
    
    return 0;

	
}
