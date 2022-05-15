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
     void display(){
        cout<<"The Book name is: "<<s<<endl;
        cout<<"The Book price is rupess: "<<price<<endl;
        cout<<"The Book has pages: "<<page<<endl;
    }
    
};


int main()
{
    
    book b1;
    cout<<"=========== BOOK1 DATA ============"<<endl;
    b1.setPage(100);
    b1.setPrice(293.99);
    b1.setName("Java Programming");
    b1.display();
  

    return 0;
}
