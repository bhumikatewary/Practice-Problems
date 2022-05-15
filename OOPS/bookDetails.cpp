/* book details using getter and setter functions*/




#include <bits/stdc++.h>


using namespace std;
class book{
    private:
    int page;
    float price;
    string s;
    public:
    void setPage(int p){
        page=p;
    }
     void setPrice(float pr){
        price=pr;
    }
     void setName(string name){
         s = name;      //strcpy for char datatype can be used.
    }
     int getPage(){
         cout<<"Page numbers are: "<<page<<endl;
         return 0;
         
     }
     float getPrice(){
        
         return price;
        
     }
     string getName(){
         return s;
     }
    
};


int main()
{
    
    book b1;
    cout<<"=========== BOOK1 DATA ============"<<endl;
    b1.setPage(100);
    b1.setPrice(293.99);
    b1.setName("Java Programming");
    cout<<"The Book name is: "<<b1.getName()<<endl;
   cout<<"The price is: "<< b1.getPrice()<<endl;
   b1.getPage();
  

    return 0;
}
