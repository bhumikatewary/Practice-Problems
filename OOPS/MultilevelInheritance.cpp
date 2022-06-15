#include <iostream>
using namespace std;

class parent{
    private:
    int a;
    public:
    void displayParent();
    void inputParent();
};

void parent:: inputParent(){
    cout<<"Enter the value of a in parent: "<<endl;
    cin>>a;
}

void parent:: displayParent(){
    cout<<"The value of a in parent is: "<<a<<endl;
}

class child1 : public parent{
    private:
    int b;
    public:
    void displayChild1();
    void inputChild1();
};

void child1:: inputChild1(){
    parent::inputParent();
    cout<<"Enter the value of b in child1: "<<endl;
    cin>>b;
}

void child1:: displayChild1(){
    parent::displayParent();
    cout<<"The value of b in child1 is: "<<b<<endl;
}


class child2 : public child1{
    private:
    int c;
    public:
    void displayChild2();
    void inputChild2();
   
};

void child2:: inputChild2(){
    child1::inputChild1();
    cout<<"Enter the value of b in child2: "<<endl;
    cin>>c;
}

void child2:: displayChild2(){
    child1::displayChild1();
    cout<<"The value of c in child1 is: "<<c<<endl;
}

int main(){
    child2 ch;
    ch.inputChild2();
    ch.displayChild2();
}








