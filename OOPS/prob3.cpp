//Calculate area of circle using polymorphism and virtual function


#include<iostream>
using namespace std;

class Shape{
  protected:
  int r;
  public:
  virtual void input()=0;
  virtual void show()=0;
};

class Circle: public Shape{
  public:
  void input(){
      cout<<"Enter the radius of the circle: "<<endl;
      cin>>r;
  }
  void show(){
      cout<<"=========ANSWER==========="<<endl;
      cout<<"The area is: "<<(3.14*r*r)<<endl;
  }
};

int main(){
    Circle c;
    Shape *s;
    s = &c;
    s->input();
    s->show();
    return 0;
}
