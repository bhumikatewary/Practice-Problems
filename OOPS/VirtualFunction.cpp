#include <iostream>
using namespace std;

class parent{
    public:
    virtual void display(){
        cout<<"Parent class display method...."<<endl;
    }
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
    parent objP;
    child1 objC1;
    child2 objC2;
    parent *ptr;
    ptr = &objP;
    ptr->display();
    ptr = &objC1;
    ptr->display();
    ptr = &objC2;
    ptr->display();
  return 0;
    
}
