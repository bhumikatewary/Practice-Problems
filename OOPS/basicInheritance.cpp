#include <iostream>

using namespace std;

class Animal{
    public:
    int leg = 4;
};

class Dog : public Animal{
    public:
    int tail = 1;
};

int main(){
    
    Dog d;
    cout<<"Legs are: "<<d.leg<<endl;
    cout<<"Tail is: "<<d.tail<<endl;
    return 0;
}
