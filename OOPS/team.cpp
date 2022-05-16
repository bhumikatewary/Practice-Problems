/*Write a class player that contains attributes for the player name, age, team name. Write three
member functions input data, change data and display data for these attributes.*/

#include <bits/stdc++.h>

using namespace std;


class player{
    private:
    int age;
    string name,teamName;
    public:
    void inputData();
    void changeData(int a,string n,string t);
    void displayData();
};

void player::inputData(){
    cout<<"Enter the age of the player: "<<endl;
    cin>>age;
    cout<<"Enter the name of the player: "<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"Enter the team name of the player: "<<endl;
    getline(cin,teamName);
}

void player::changeData(int a, string n, string t){
    age=a;
    name=n;
    teamName=t;
}

void player::displayData(){
    cout<<"The player name is: "<<name<<endl;
    cout<<"The player age is: "<<age<<endl;
    cout<<"The player team name is: "<<teamName<<endl;
}

int main()
{
   player p;
  int choice;
  while(1){
       cout<<"=========player menu=========="<<endl;
      cout<<"1: to input data"<<endl;
       cout<<"2: to edit data"<<endl;
        cout<<"3: to display data"<<endl;
         cout<<"4: to exit"<<endl;
      cout<<"Enter your choice"<<endl;
      cin>>choice;
      switch (choice){
          case 1: 
          p.inputData();
          break;
          case 2:
          p.changeData(10, "bhumika", "the roar");
          break;
          case 3:
          p.displayData();
          break;
          case 4:
          exit(1);
          break;
          default:
          cout<<"Invalid choice"<<endl;
          break;
      }
  }
  

    return 0;
}
