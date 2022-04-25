/*A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.*/

//Using constructive algorithms

#include <iostream>

using namespace std;

int main()
{
    int n;
   cin>>n;
   
   if(n==2 || n==3){
       cout<<"NO SOLUTION"<<endl;
   }
   
   for(int i=1;i<=n;i++){
       if(i%2 == 0)
       cout<<i<<" ";
   }
   
   for(int i=1;i<=n;i++){
       if(i%2 != 0)
       cout<<i<<" ";
   }
   
   

    return 0;
}
