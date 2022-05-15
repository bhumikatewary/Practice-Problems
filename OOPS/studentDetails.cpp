#include <iostream>

using namespace std;

class student{
   private:
   int roll;
   char name[30];
   string s;
   public:
   void input();
   void output();
};

void student::input(){
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Department: ";
    cin.ignore();
    getline(cin,s);
}

void student::output(){
    cout<<"The name is: "<<name<<endl;
    cout<<"The roll number is: "<<roll<<endl;;
    cout<<"The Department is: "<<s;
}

int main()
{
   student s;
   cout<<"-------------INPUT DATA-------------"<<endl;
   s.input();
   cout<<"-------------OUTPUT DATA------------"<<endl;
   s.output();

    return 0;
}
