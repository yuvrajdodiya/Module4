/*5.Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class Triangle
{
	private:
		float side1,side2,side3;
	public:
		Triangle(float a,float b,float c)
		{
			side1=a;
			side2=b;
			side3=c;
		}
		void display()
		{
			if(side1==side2 && side2==side3 && side1==side3)
			{
				cout<<"\n equilateral.";
			}
			else if(side1==side2 || side2==side3 || side1==side3)
			{
				cout<<"\n esosceles.";
			}
			else
			{
				cout<<"\n scalene.";
			}
		}
};
int main()
{
	int side1,side2,side3;
	cout<<"\n Enter The Side1:";
	cin>>side1;
	cout<<"\n Enter The Side2:";
	cin>>side2;
	cout<<"\n Enter The Side3:";
	cin>>side3;
	
	Triangle T1(side1,side2,side3);
	T1.display();
	return 0;
}

