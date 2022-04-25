/* You are given all numbers between 1,2,…,n except one. Your task is to find the missing number. */

// Using Number Theory Trick

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    long long int n, input, sum=0;
    cin>>n;
    
    for(int i=0;i<n-1;i++){
        cin>>input;
        sum+=input;
    }
    
    cout<< (n*(n+1))/2 - sum <<endl;
    

    return 0;
}
