//Write a C++ program to implement a class called Student that has private member variables for name, 
//class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.
#include<iostream>
using namespace std;
class Student{
    char name[50];
    int clas;
    int roll;
    int marks;

    public:
    Student(){
      cout<<"Enter your name: ";
      cin.ignore();
      cin.getline(name,50);
      cout<<"Enter class ";
      cin>>clas;
      
      cout<<"Enter roll";
      cin>>roll;
      cout<<"Enter marks";
      cin>>marks;


    }

    

        void show(){
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << clas << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: ";
        
        if(marks >= 90)
            cout << "A";
        else if(marks >= 80)
            cout << "B";
        else if(marks >= 70)
            cout << "C";
        else if(marks >= 60)
            cout << "D";
        else if(marks >= 50)
            cout << "E";
        else
            cout << "Fail";
        
        cout << endl;
    }
};
int main(){
    Student A;
    A.show();
return 0;
}