#include<iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    void set() {
        cout << "Enter year: ";
        cin >> year;
        
        cout << "Enter Month (in number ex: jan=1): ";
        cin >> month;
        while(month > 12 || month < 1) {
            cout << "Month only between 1 to 12: ";
            cin >> month;
        }
        
        cout << "Enter day: ";
        cin >> day;
        
        
        while(!isValidDate()) {
            cout << "Invalid day for this month! Enter day again: ";
            cin >> day;
        }
    }
    
    bool isValidDate() {
       
        if(day < 1 || day > 31) return false;
        
        // day
        if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        
        if(month == 2) {


            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if(day > 29) return false;
            } else {
                if(day > 28) return false;
            }
        }
        
        return true;
    }

    void get() {
        cout << "\nDate is: " << day << " : " << month << " : " << year;
    }
};

int main() {
    Date day1;
    day1.set();
    day1.get();
    return 0;
}