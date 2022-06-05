//post and pre fix operator overloading



#include <iostream>
using namespace std;

class Test{
    private:
    int num;
    public:
    void operator ++();
    void operator ++(int);
    void getValue();
    void show();
};

void Test:: operator ++(){
    ++num;
}

void Test:: operator ++(int){
    num++;
}


void Test::getValue(){
    cout<<"Enter the value: "<<endl;
    cin>>num;
}

void Test::show(){
    cout<<"The value is "<<endl;
    cout<<num;
    cout<<" "<<endl;
}

int main()
{
  Test t1,t2;
  t1.getValue();
  t2.getValue();
  t1.show();
  t2.show();
  ++t1;
  t2++;
  cout<<"The incremented value is: "<<endl;
  t1.show();
  cout<<" "<<endl;
  t2.show();

    return 0;
}

