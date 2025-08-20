#include <bits/stdc++.h>
using namespace std;
    
    int sumBTWrange(int start ,int end){
        // n being till the last number to be added;
         int sum = 0;
        for(int i = start; i <= end; i++){
            sum += i;
            
            
        }
        return sum;
   
 
        
    }
int main() {
    int start , end;
    cout<<"enter the range"<<endl;    
    cin>>start;
    cin>>end;
    
    int result = sumBTWrange(start , end);
    
    cout<< " result: "<<result<<endl;
    
    return 0;

	
}
