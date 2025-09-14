//Write a C++ program to create a class called Rectangle that has private member variables for length and width.
// Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		float length;
		float width;
	public:
		Rectangle(float x, float y){
			
			length=x;
			width=y;
			
		}
		
		float area(){
			return length*width;
		}
		
		float perimeter(){
			return 2*(length+width);
		}
		

};
int main(){
	
    Rectangle R(15.1,16.1);
	cout<<"The Area is: "<<R.area()<<endl;
	cout<<"The perimeter is: "<<R.perimeter();
}