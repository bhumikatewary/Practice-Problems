#include <bits/stdc++.h>

using namespace std;

class Distance{
    private:
    int km,hr;
    public:
    Distance();
    void getValue();
    void display();
    void totalDistance(Distance);
};

Distance::Distance():km(0),hr(0){
}

void Distance::getValue(){
    cout<<"Enter the distance travelled in km"<<endl;
    cin>>km;
    cout<<"Enter the hours taken for travel"<<endl;
    cin>>hr;
}

void Distance::display(){
    cout<<"The travelled distance is: "<<km<<" kilometers"<<endl;
    cout<<"The travelled hours are :"<<hr<<" hours"<<endl;
}

void Distance::totalDistance(Distance pass){
    Distance t;
    t.km = km + pass.km;
    t.hr = hr + pass.hr;
    cout<<"The total distance is: "<<t.km<<" km travelled in "<<t.hr<<" hours"<<endl;
}


int main()
{
    
    Distance d1;
    Distance d2;
    cout<<"========Source distance=========== "<<endl;
    d1.getValue();
    d1.display();
    cout<<"=========Destination============  "<<endl;
    d2.getValue();
    d2.display();
    d1.totalDistance(d2);
    

    return 0;
}
