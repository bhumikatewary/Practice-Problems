#include <iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>
class Test{
    private:
    T n;
    public:
    void input(){
        cout<<"Enter the value of n: "<<endl;
        cin>>n;
    }
    void display(){
        cout<<"n is: "<<n<<endl;
    }
    
};

int main(){
    Test<int>obj1;
    obj1.input();
    obj1.display();
}
