/* WAP that define a class for a bank account that includes following data:
1. Name of depositor
2. Account name
3. Balance amount in the Account

The class count has the following member functions:
1. A constructor to assign initial values
2. Deposit function to deposit some amount. It accepts amount as a parameter
3. Withdraw function to withdraw some amount after checking the balance(accepts amount as parameter)
4. Display function to display name and balance

*/

#include <bits/stdc++.h>
using namespace std;


class Bank{
    private:
    string name;
    string acc_name;
    int balanceAmt;
    int acc_Number;
    public:
    Bank();
    void deposit(int);
    void withdraw(int);
    void display();
};

Bank::Bank(){
    cout<<"Enter Account Holder's Name: "<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Account Name: "<<endl;
    getline(cin,acc_name);
    cout<<"Enter Account Number: "<<endl;
    cin>>acc_Number;
    cout<<"Enter Opening Amount: "<<endl;
    cin>>balanceAmt;
}


void Bank::deposit(int amt){
    balanceAmt += amt;
    cout<<"The deposited amount is: "<<amt<<endl;
    cout<<"The balance amount is: "<<balanceAmt<<endl;
}

void Bank::withdraw(int amt){
    if(amt>balanceAmt){
        cout<<"LOW BALANCE!!"<<endl;
    }
    balanceAmt -= amt;
    cout<<"The withdrawn amount is: "<<amt<<endl;
    cout<<"The balance amount is: "<<balanceAmt<<endl;
}

void Bank::display(){
   cout<<"========== BANK ACCOUNT DETAILS =============="<<endl;
   cout<<"The Account Holder is: "<<name<<endl;
   cout<<"The Balance Amount is: "<<balanceAmt<<endl;
   cout<<"Account Number: "<<acc_Number<<" "<<"Account Name: "<<acc_name<<endl;
}


int main()
{
    Bank b1;
    int choice, amt;
    while(1){
        cout<<"1: Enter details of account holder"<<endl;
        cout<<"2: Deposit Amount"<<endl;
        cout<<"3: Withdraw Amount"<<endl;
        cout<<"4: Display Account Details"<<endl;
        cout<<"5: Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            Bank();
            break;
            case 2:
            cout<<"Enter amount to be deposited: "<<endl;
            cin>>amt;
            b1.deposit(amt);
            break;
            case 3:
            cout<<"Enter amount to withdraw: "<<endl;
            cin>>amt;
            b1.withdraw(amt);
            break;
            case 4:
            b1.display();
            break;
            case 5:
            exit(1);
            break;
            default:
            cout<<"Wrong choice"<<endl;
            break;
        }
        
    }
    return 0;
}

