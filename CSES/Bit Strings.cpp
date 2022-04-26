/* Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.*/

//It uses combanatoric stategy

#include <iostream>

using namespace std;

#define MOD 1000000007

int main()
{
    int n,answer=1;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        answer*=2;
        answer %= MOD;
    }
    
    cout<<answer;

    return 0;
}
