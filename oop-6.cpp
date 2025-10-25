#include<iostream>
using namespace std;

class Triangle{
    int side1;
    int side2;
    int side3;

public:
    Triangle(){
        cout<<"Enter side 1 value: ";
        cin>>side1;
        
        cout<<"Enter side 2 value: ";
        cin>>side2;
        
        cout<<"Enter side 3 value: ";
        cin>>side3;
    }

    void find(){
        
        if(side1 == side2 && side2 == side3)
            cout<<"Triangle is equilateral"<<endl;
        else if(side1 == side2 || side2 == side3 || side1 == side3)
            cout<<"Triangle is isosceles"<<endl;
        else
            cout<<"Triangle is scalene."<<endl;
    }
};

int main(){
    Triangle user;
    user.find();
    return 0;
}