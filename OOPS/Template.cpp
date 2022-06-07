#include <iostream>
#include<bits/stdc++.h>
using namespace std;

template <class T>
T  Max(T n, T m){
    if(n>m)
        return n;
        else
        return m;
}

int main(){
    int r;
    r = Max(2,8);
    cout<<"The maximum number is: "<<r<<endl;
    return 0;
}
