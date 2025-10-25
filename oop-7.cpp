#include<iostream>
using namespace std;

class Employee{
    char name[50];
    int ID;
    int salary;
    char performanceGrade;  


public:
    Employee(){
        cout << "Enter your name: ";
        cin.ignore(); 
        cin.getline(name, 50);
        cout << "Enter your ID: ";
        cin >> ID;
        cout << "Enter your Salary in PKR: ";
        cin >> salary;
    }
   
    void setGrade(char gr){
        performanceGrade = gr;  
    }

    void calculateSalary(){
        if(performanceGrade == 'A')
            salary += 20000;
        else if(performanceGrade == 'B')
            salary += 15000;
        else if(performanceGrade == 'C')
            salary += 10000;
        else if(performanceGrade == 'D')
            salary += 5000;
        else
            cout << "Invalid grade! No bonus applied." << endl;
        
        cout << "Your updated salary is: " << salary << " PKR" << endl;
    }
};

int main()
{
    Employee emp1;
    char gr;
    cout << "Enter your Grade (A/B/C/D where A is best): ";
    cin >> gr;
    
    emp1.setGrade(gr);
    emp1.calculateSalary();
    
    return 0;
}