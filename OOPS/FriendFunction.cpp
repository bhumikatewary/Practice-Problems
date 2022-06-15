#include <iostream>

using namespace std;

class B; //forward declaration
class A{
    private:
    int num1;
    public:
    void getValue1();
    friend void Add(A obj1, B obj2);
};

void A::getValue1(){
    cout<<"Enter num1: "<<endl;
    cin>>num1;
}

class B{
    private:
    int num2;
    public:
    void getValue2();
    friend void Add(A obj1, B obj2);
};

void B::getValue2(){
    cout<<"Enter num2: "<<endl;
    cin>>num2;
}

void Add(A obj1, B obj2){
    cout<<"The sum is: "<<obj1.num1+obj2.num2<<endl;
}

int main()
{
    A obj1;
    B obj2;
    obj1.getValue1();
    obj2.getValue2();
    Add(obj1,obj2);
    

    return 0;
}
