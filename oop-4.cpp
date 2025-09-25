//Write a C++ program to create a class called Car that has private member variables for company, model, and year.
//  Implement member functions to get and set these variables.
#include<iostream>
using namespace std;

class Car {
    char* comp;
    int model, year;

public:
    Car() {
        comp = new char[50];
    }

    void set(const char* c, int m, int y) {
        int i;
        for(i = 0; c[i] != '\0'; i++) {
            comp[i] = c[i];
        }
        comp[i] = '\0';
        model = m;
        year = y;
    }

    void get() {
        for(int i = 0; comp[i] != '\0'; i++) {
            cout << comp[i];
        }
        cout << endl << model << endl << year << endl;
    }

    ~Car() {
        delete[] comp; // free memory
    }
};
int main(){

    Car BW;
    BW.set("BMW",1234,2001);
    BW.get();

    return 0;
}