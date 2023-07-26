#include <iostream>
using namespace std; 
int main() {
    
    int n,chip,left=0,sum=0,rem=0,need=0;
    cin>>n>>chip;
    sum=(n*(n+1))/2;
    if(chip%sum==0){
       
       cout<<left;
    }
    else{
        
        rem=chip%sum;
        
        for(int i=0;i<n-1;i++){
            
            need+=i;
            
            
            if(rem<need){
                
                cout<<rem-((i-1)*i)/2;
                break;
            }
            
        }
       
        
    }
} 
  