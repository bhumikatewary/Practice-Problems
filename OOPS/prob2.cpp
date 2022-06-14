//Write a class Teacher that contains the attribute teacher name, age and address. It also contains member funtions input and show for its attributes.
//Write a class Student that contains the attribute student  gender and percentage obtained. It also contains member functions to input and show its attributes.
//Write third class Scholar that inherits both Teacher and student class.


#include <iostream>
using namespace std;

class Student;
class Scholar;
class Teacher{
    private:
    string name;
    int age;
    string address;
    public:
    void inputTeacher();
    void showTeacher();
};

void Teacher::inputTeacher(){
    cout<<"Enter the Teacher name: "<<endl;
    getline(cin,name);
    cout<<"Enter the Teacher age: "<<endl;
    cin>>age;
    cout<<"Enter the Teacher address: "<<endl;
    cin.ignore();
    getline(cin,address);
}

void Teacher::showTeacher(){
    cout<<"Teacher name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address<<endl;
}

class Student{
    private:
    string gender;
    int marks;
    public:
    void inputStudent();
    void showStudent();
};

void Student::inputStudent(){
    cout<<"Enter the gender: "<<endl;
    getline(cin,gender);
    cout<<"Enter the marks: "<<endl;
    cin>>marks;
}

void Student::showStudent(){
    cout<<"Gender: "<<gender<<endl;
    cout<<"Marks: "<<marks<<endl;
}

class Scholar:public Teacher,public Student{
    public:
    void inputScholar(){
       inputTeacher();
       inputStudent();
    }
    void showScholar(){
        showTeacher();
        showStudent();
    }
};



int main(){
  Scholar s;
  s.inputScholar();
    cout<<"===================================================================="<<endl;
    cout<<"========================= DETAILS ==================================="<<endl;
    cout<<"======================================================================"<<endl;
    s.showScholar();
        return 0;
}

