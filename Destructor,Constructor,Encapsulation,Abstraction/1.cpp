/*1. Write a program to find the multiplication values and the cubic values using
inline function*/
#include<iostream>
using namespace std;
inline mul(int a,int b)
{
	return a*b;
}
inline cubic(int a)
{
	return a*a*a;
}
int main()
{
	int  a,b;
	cout<<"\n Enter The Number1:";
	cin>>a;
	cout<<"\n Enter The Number2:";
	cin>>b;
	cout<<"\n Multiplication Of "<<a<<" and "<<b<<" is "<<mul(a,b);
	cout<<"\n Cubic Is="<<cubic(a);
	return 0;
}
