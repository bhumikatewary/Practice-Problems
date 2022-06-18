#include <iostream>
using namespace std;

class parent{
  private:
  int a;
  protected:
  int b;
  public:
  int c;
};

class child : public parent{
  public:
  void input(){
      cout<<"Enter the value of b: "<<endl;
      cin>>b;
      cout<<"Enter the value of c: "<<endl;
      cin>>c;
  }
};

int main(){
    child ch;
    ch.input();
    cout<<"Enter the value of c in main: "<<endl;
    cin>>ch.c;
    return 0;
}
