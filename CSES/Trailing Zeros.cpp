/*Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.*/

//Basic Logic: we will check the prime factorization of the number given. Since we have to find trailing zeros, the number should divide by 2 and 5 as 2*5 = 10.
// The formula is : n/5^k while n>5^k because we will check only the number of 5 present as 2 is a very common factor.



#include <iostream>

using namespace std;

int main()
{
    long n, current=5, sum=0;
    cin>>n;
    
    while(current<=n){
        sum += n/current;
        current *= 5;
    }
    
    cout<<sum;

    

    return 0;
}
