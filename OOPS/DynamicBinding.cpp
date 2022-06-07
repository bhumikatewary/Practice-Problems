#include <iostream>
using namespace std;

class parent{
    public:
    virtual void display(){
        cout<<"Parent class display method...."<<endl;
    }
};

class child1 : public parent{
    public:
    void display(){
        cout<<"Child1 class display method...."<<endl;
    }
};

class child2 : public child1{
    public:
    void display(){
        cout<<"Child2 class display method...."<<endl;
    }
};


int main(){
     int choice,i,len;
    cout<<"Enter the length for the loop: "<<endl;
    cin>>len;
   parent *ptr[len];
   
   cout<<"Enter your choice: \n 1. Parent \n 2. Child1 \n 3. Child2"<<endl;
   for(i=0;i<len;i++){
       cout<<"Which class object to be created? : " <<endl;
       cin>>choice; 
       if(choice==1){
           ptr[i]= new parent;
       }else if (choice == 2){
           ptr[i]= new child1;
       }else if(choice == 3){
           ptr[i] = new child2;
       }
   }
   
   for(int i=0; i<len; i++){
       ptr[i] -> display();
   }
  return 0;
    
}
