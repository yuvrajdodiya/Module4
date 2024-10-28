/*13.Write a program to find the max number from given two numbers
using friend function*/
#include<iostream>
using namespace std;
class Number
{
	private: 
	      int A,B;
	public:
		void setvalue(int n1,int n2)
		{
			A=n1;
			B=n2;
		}
		friend void maxvalues(Number &obj);
		void display()
		{
			cout<<"\nEnter The A:"<<A;
			cout<<"\n Enter The B:"<<B;
		}
};
void maxvalues(Number &obj)
{
	if(obj.A>obj.B)
	{
		cout<<"\nA Is Maximum.";
	}
	else
	{
		cout<<"\nB Is Maximum.";
	}
}
int main()
{
	Number n1;
	n1.setvalue(30,40);
	n1.display();
	maxvalues(n1);
	return 0;
}
