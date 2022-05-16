/* Concepts of default and parametrised constructor shown
Constructor Overloading shown */



#include <iostream>

using namespace std;

class Test{
  private :
  int n;
  public:
  Test(): n(10){
      cout<<"Constructor is called.."<<endl;
  }
  Test(int num){
      n=num;
  }
  void display(){
      cout<<"Value of n: "<<n<<endl;
  }
};

int main()
{
   Test t1;
   Test t2(20);
   t1.display();
   t2.display();

    return 0;
}
