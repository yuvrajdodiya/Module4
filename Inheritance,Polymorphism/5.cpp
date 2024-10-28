/*5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class Student 
{
	private :
		int roll;
	public :
		void setroll()
		{
			cout<<"\nEnter the roll number = ";
			cin>>roll;
		}
		void getroll()
		{
			cout<<"\n Roll = "<<roll;
		}
};
class Test
{
	protected :
		int sub1, sub2;
	public :
		void setmarks()
		{
			cout<<"\nEnter the marks of subject 1 = ";
			cin>>sub1;
			cout<<"\nEnter the marks of subject 2 = ";
			cin>>sub2;
		}
		void getmarks()
		{
			cout<<"\n subject 1 marks = "<<sub1;
			cout<<"\n subject 2 marks = "<<sub2;
		}
};
class Result : public Student, public Test
{
	protected :
		int total;
	public :
	    void caltotal()
		{
			total=sub1+sub2;
			cout<<"\nTotal marks is = "<<total;
		}
		void display()
		{
			getroll();
			getmarks();
			caltotal();
		}	
};
int main()
{
	Result r1;
	r1.setroll();
	r1.setmarks();
	r1.display();
}
