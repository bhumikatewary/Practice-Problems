// Write a class Book that contains the attribute bookID, book name and price. It also contains member functions to input and show its attributes. 
//Write another class Writer that contains the attributes writer name, address and number of books written by him. It contains total 2 books as objects. It also contains
//member function to input and show its attributes.


#include <iostream>
using namespace std;

class Writer;
class Book{
    private:
    int bookID;
    string bookName;
    float price;
    public:
    void input();
    void show();
};

void Book::input(){
    cout<<"Enter the details of the book: "<<endl;
    cout<<"Enter the Book ID: "<<endl;
    cin>>bookID;
    cout<<"Enter the Book Name: "<<endl;
    cin.ignore();
    getline(cin,bookName);
    cout<<"Enter the price: "<<endl;
    cin>>price;
}

void Book::show(){
    cout<<"The details of the book are: "<<endl;
    cout<<"Book ID: "<<bookID<<endl;
    cout<<"Book Name: "<<bookName<<endl;
    cout<<"Price: "<<price<<endl;
}

class Writer{
     private:
    string writerName;
    Book b[2];
    public:
    void getValue();
    void display();
    friend class Book;
};

void Writer::getValue(){
    cout<<"Enter the writer's name: "<<endl;
    getline(cin, writerName);
    for(int a=0; a<2; a++){
        b[a].input();
    }
}

void Writer::display(){
    cout<<"Writer's name: "<<writerName<<endl;
    for(int a=0; a<2; a++){
        b[a].show();
    }
}

int main(){
    Writer w;
    w.getValue();
    cout<<"===================================================================="<<endl;
    cout<<"========================= DETAILS ==================================="<<endl;
    cout<<"======================================================================"<<endl;
    w.display();
        return 0;
}

