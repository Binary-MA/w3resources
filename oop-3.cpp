#include<iostream>
using namespace std;

class Person{
    char name[50];
    int age;
    char country[50];
    
public:
    void set(const char* n, int a, const char* c) {
    
        int i = 0;
        while(n[i] != '\0' && i < 49) {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0'; 
        
        age = a;
        
    
        i = 0;
        while(c[i] != '\0' && i < 49) {
            country[i] = c[i];
            i++;
        }
        country[i] = '\0'; 
    }
    
    void get() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country;
    }
};

int main() {
    Person P;
    P.set("Binary", 50, "Mars");
    P.get();
    return 0;
}