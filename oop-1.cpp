//Write a C++ program to implement a class called Circle that has private member variables for radius. 
//Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;

class Circle{
	private:
		float radius;
	public:
		void set(float r){
			radius=r;
		}
		float get(){
			return radius;
		}
		float area(){
			
			return 3.14*radius*radius;
		}
		float circum(float radius){
			
			return 2*3.14*radius;
		}
		
};
int main(){
	Circle r;
	r.set(9.00);
	
	cout<<"Area is :"<<r.area(r.get())<<endl;
		cout<<"Circum is :"<<r.circum(r.get());
	
}




