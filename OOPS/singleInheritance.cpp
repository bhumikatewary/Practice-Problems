#include <iostream>
using namespace std;

class parent{
    private:
    int a,b;
    public:
    parent(int p1,int p2);
    void show();
};

class child : public parent{
  private:
  int c,d;
  public:
  child(int p1, int p2, int c1, int c2);
  void display();
};

child::child(int p1, int p2, int c1, int c2):parent(p1, p2){
    c=c1;
    d=c2;
}

void child::display(){
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
}

parent::parent(int p1, int p2){
    a=p1;
    b=p2;
}

void parent::show(){
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
}

int main()
{
    child ch(3,4,5,6);
    ch.show();
    ch.display();

    return 0;
}
