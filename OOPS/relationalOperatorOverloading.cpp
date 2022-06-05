// <, > (relational operator overloading)
// same logic can be used for other relational operators




#include <iostream>

using namespace std;

class Distance{
    private:
    int feet;
    float inches;
    public:
    Distance();
    Distance(int,float);
    void display();
    int operator <(Distance);
     int operator >(Distance);
};

Distance::Distance():feet(0),inches(0)
{}

Distance::Distance(int f, float in):feet(f),inches(in)
{}

void Distance::display(){
    cout<<"The feet and inches are: "<<feet<<"  "<<inches<<endl;
}

int Distance:: operator <(Distance d){
    if((feet<d.feet) && (inches<d.inches))
    return 1;
    else
    return 0;
}

int Distance:: operator >(Distance d){
    if((feet>d.feet) && (inches>d.inches))
    return 1;
    else
    return 0;
}

int main()
{
    Distance d1(2,6.9),d2(3,7.9),d3(7,9.0),d4(3,8.8);
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    
    if(d1<d2){
    cout<<"D1 < D2"<<endl;
    }else{
        cout<<"D1>D2"<<endl;
    }
    
     if(d3>d4){
    cout<<"D1 > D2"<<endl;
    }else{
        cout<<"D1<D2"<<endl;
    }
    return 0;
}
