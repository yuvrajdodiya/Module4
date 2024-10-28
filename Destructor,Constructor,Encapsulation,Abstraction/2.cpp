/*2.Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include<iostream>
using namespace std;
class add
{
    public:
    	add(int a,int b)
    	{
    		cout<<"\n Addition ="<<a+b;
		}
		
};
class sub
{
	public:
		sub(int a,int b)
		{
			cout<<"\n Substraction ="<<a-b;
		}
};
class mul
{
	public:
		mul(int a,int b)
		{
			cout<<"\n Multiplication ="<<a*b;
		}
};
class div
{
	public:
		div(int a,int b)
		{
			cout<<"\n Division ="<<a/b;
		}
};
int main()
{
	int a,b;
	cout<<"\n Enter The Number:";
	cin>>a;
	cout<<"\n Enter The Number:";
	cin>>b;
	add a1(a,b);
	sub s1(a,b);
	mul m1(a,b);
	div d1(a,b);
	return 0;
}
