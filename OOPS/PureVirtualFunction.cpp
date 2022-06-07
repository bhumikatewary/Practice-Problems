#include <iostream>
using namespace std;

class parent{  // abstract class
    public:
    virtual void display() = 0; //pure virtual function
};

class child1 : public parent{
    public:
    void display(){
        cout<<"Child1 class display method...."<<endl;
    }
};

class child2 : public child1{
    public:
    void display(){
        cout<<"Child2 class display method...."<<endl;
    }
};


int main(){
    parent *ptr[2];
    ptr[0] = new child1;
    ptr[1] = new child2;
    ptr[0]->display();
    ptr[1]->display();
  return 0;
    
}
