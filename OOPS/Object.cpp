/* Object creation, count and deletion */


#include <iostream>
using namespace std;

class count{
  public:
  static int counter;
  count();
  void display();
  ~count();
  
};

int count::counter=0;

count::count(){
    counter++;
}

void count::display(){
    cout<<"Object created: "<<counter<<endl;
}

count::~count(){
    counter--;
    cout<<"Object destroyed: "<<counter<<endl;
}

int main()
{
   count c1,c2,c3,c4,c5;
   c1.display();
    return 0;
}
