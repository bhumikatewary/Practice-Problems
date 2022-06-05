//operator overloading of +,-,*,/



#include <iostream>
using namespace std;

class Test{
  private:
  int n;
  public:
  Test():n(0)
  {}
  void getValue();
  Test operator +(Test obj);
   Test operator -(Test obj);
    Test operator *(Test obj);
     Test operator /(Test obj);
  int display();
};

int Test::display(){
    return n;
}

void Test::getValue(){
    cout<<"The value of obj is: "<<endl;
    cin>>n;
}

Test Test::operator +(Test obj){
    Test t;
    t.n = n + obj.n;
    return t;
}


Test Test::operator*(Test obj){
    Test t;
    t.n = n * obj.n;
    return t;
}

Test Test::operator -(Test obj){
    Test t;
    t.n = n-obj.n;
    return t;
}

Test Test::operator /(Test obj){
    Test t;
    t.n = n / obj.n;
    return t;
}

int main(){
    Test t1,t2,add, sub, mul, divi;
    cout<<"Enter the value of object: "<<endl;
    t1.getValue();
    t2.getValue();
    add = t1+t2;
    sub = t1-t2;
    mul = t1*t2;
    divi = t1/t2;
    cout<<"The addition is: "<<add.display()<<endl;
    cout<<"The subtraction is: "<<sub.display()<<endl;
    cout<<"The multiplication is: "<<mul.display()<<endl;
    cout<<"The division is: "<<divi.display()<<endl;
    
}
