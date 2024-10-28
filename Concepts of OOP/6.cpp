/*6.Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class Person
{
	private :
		string name;
		int age;
		string country;
	public :
		void setvalue(string n,int a,string c)
		{
			name=n;
			age=a;
			country=c;
		}
		void getvalue()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country<<endl;
		}
};
int main()
{
	Person p1;
	p1.setvalue("Yuvraj",21,"India");
	Person p2,p3;
	p2.setvalue("ayush",22,"UK");
	p3.setvalue("achal",20,"USA");
	p1.getvalue();
	p2.getvalue();
	p3.getvalue();
	return 0;
}
