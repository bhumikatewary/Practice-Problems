/* You have two coin piles containing a and b coins. On each move, 
you can either remove one coin from the left pile and two coins from the right pile, 
or two coins from the left pile and one coin from the right pile.

Your task is to efficiently find out if you can empty both the piles.*/

// We follow the logic that if the other pile has double number then solution is possible otherwise no 
// and the total coins should be divisble by two as it should satisfy the equation a=2x+y and b=x+2y



#include <iostream>

using namespace std;

int main()
{
      long long int n,a,b;
      cin>>n;
      
      for(int i=0;i<n;i++){
          cin>>a;
          cin>>b;
          
          if(a<b){
          swap(a,b);
      }
    
    if(a > 2*b || (a+b)%3 != 0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
      }
     
    
    return 0;
}

