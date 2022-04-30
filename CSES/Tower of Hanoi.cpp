/* The Tower of Hanoi game consists of three stacks (left, middle and right) and n round disks of different sizes. 
Initially, the left stack has all the disks, in increasing order of size from top to bottom.

The goal is to move all the disks to the right stack using the middle stack. 
On each move you can move the uppermost disk from a stack to another stack. 
In addition, it is not allowed to place a larger disk on a smaller disk.

Your task is to find a solution that minimizes the number of moves.*/


#include <iostream>

using namespace std;

int toh(int n){
    if(n==0){
        return 0;
    }
    return toh(n-1)+1+toh(n-1);
}

void steps(int n, int from_rod, int to_rod, int helper_rod){
    if(n==1){
        cout<<from_rod<<" "<<to_rod<<endl;
        return;
    }
    steps(n-1,from_rod,helper_rod,to_rod);
    cout<<from_rod<<" "<<to_rod<<endl;
    steps(n-1,helper_rod,to_rod,from_rod);
    
    
}

int main()
{
   int n;
   cin>>n;
   cout<<toh(n)<<endl;
   steps(n,1,3,2);

    return 0;
}
