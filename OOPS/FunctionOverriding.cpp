#include <iostream>
using namespace std;

class parent{
    private:
    int a;
    public:
    void display(){
        cout<<"Parent class display method...."<<endl;
    }
};

class child : public parent{
    private:
    int b;
    public:
    void display(){
        parent::display();
        cout<<"Child class display method...."<<endl;
    }
};


int main(){
    child ch;
    ch.display();
    //ch.parent::display();
}

















