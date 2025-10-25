// Write a C++ program to implement a class called BankAccount that has private member variables
//  for account number and balance. 
// Include member functions to deposit and withdraw money from the account.
#include <iostream>
using namespace std;


class BankAccount{
    int num;
    int balance;

    public:
    BankAccount(){

        cout<<"Enter account number: ";
        cin>>num;
        cout<<"Enter balance:  ";
        cin>>balance;

    }

    void func(int i){

        int addball=0;

        if(i==1){
            cout<<"Enter amount of Deposit: " ;
            cin>>addball;
            balance+=addball;

            cout<<"Your balance after Deposit: "<<balance;
        }
            if(i==2){
            cout<<"Enter amount of Withdraw: " ;
            cin>>addball;
            balance-=addball;
            cout<<"Your balance after Withdraw: "<<balance;
        }
    }
    };

    int main(){
        BankAccount user;
        int i=0;
        cout<<"what do you want(Enter 1 or 2)\n1.Deposit\n2.Withdraw"<<endl;
        cin>>i;
        user.func(i);
    }