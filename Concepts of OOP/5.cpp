/*5.Write a C++ program to create a class called Rectangle that has privatemember variables for 
length and width. Implement member functions to calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		 float length,width;
	public:
		float set(float l,float w)
		{
			length=l;
			width=w;
		}
		float area()
		{
			return length*width;
		}
		float perimeter()
		{
			return (length+width)*2;
		}
};
int main()
{
	double length,width;
	cout<<"\n Enter The Length:";
	cin>>length;
	cout<<"\n Enter The Width:";
	cin>>width;
	Rectangle R1;
	R1.set(length,width);
	cout<<"\n Area Of Rectangle:"<<R1.area();
	cout<<"\n Perimeter Of Rectangle:"<<R1.perimeter();
	return 0;
}

