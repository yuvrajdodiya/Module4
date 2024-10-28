//6. Write a C++ Program to show access to Private Public and Protected using Inheritance
#include<iostream>
using namespace std;
class Student
{
	protected:
		string name;
		int roll;
	public:
		void setvalue()
		{
			cout<<"\nEnter the name:";
			cin>>name;
			cout<<"\nEnter the roll number:";
			cin>>roll;
		}
		void getvalue()
		{
			cout<<"\nName:"<<name;
			cout<<"\nRoll Number:"<<roll;
		}
};
class Marks:public Student
{
	private:
		int marks;
	public:
		void setdata()
		{
			cout<<"\nEnter the marks:";
			cin>>marks;
		}
		void getdata()
		{
			cout<<"\nMarks:"<<marks;
		}
};
int main()
{
   Marks m1;
   m1.setvalue();
   m1.setdata();
   m1.getvalue();
   m1.getdata();
}
