/* You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required? */

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    
    long long int n, input,count=0,answer=0;
    cin>>n;
    long long int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=1; i<n;i++){
        if(a[i]<a[i-1]){
            count = a[i-1]-a[i];
            a[i] = count + a[i];
            answer+=count;
            count=0;
        }
    }
    
    cout<<answer;
    
 


  return 0;
}
