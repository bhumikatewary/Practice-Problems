// super class and sub class constructor and destructor in Inheritace



#include <iostream>

using namespace std;

class parent{
    public:
  parent(){
      cout<<"Parent constructor called"<<endl;
  }  
  
  ~parent(){
      cout<<"Parent destructor called"<<endl;
  }
};

class child: public parent{
    public:
    child(){
        cout<<"Constructor of child called"<<endl;
    }
    ~child(){
        cout<<"Destructor of child called"<<endl;
    }
    
};

int main()
{
    child c;
    return 0;
}
