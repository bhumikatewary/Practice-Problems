// operator overloading of + and - operator


#include <iostream>
using namespace std;

class Test{
    private:
    int num;
    public:
    void getValue(){
    cout<<"Enter the value: "<<endl;
    cin>>num;
    }
    void operator +(Test t2){
       Test t1;
       t1.num = num + t2.num;
       cout<<"The added value is: "<<t1.num<<endl;
    }
    void operator -(Test t2){
       Test t1;
       t1.num = num - t2.num;
       cout<<"The subtracted value is: "<<t1.num<<endl;
    }
    
};

int main()
{
   Test t1, t2;
   t1.getValue();
   t2.getValue();
   t1+t2;
   t1-t2;

    return 0;
}

