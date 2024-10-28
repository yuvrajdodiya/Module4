/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function*/
#include<iostream>
using namespace std;
class person
{
	public :
	void setdata(string name,int age)
	{
		cout<<"\n name is = "<<name;
		cout<<"\n age is = "<<age;
	}
};
class student
{
	public :
		void percentage(float per)
		{
			cout<<"\n percentage is = "<<per;
		}
};
class teacher : public person,public student
{
	public:
	void entervalue(int salary)
	{
		cout<<"\n salary = "<<salary;
	}
};
int main()
{
	int age,salary;
	float num;
	string name;
	cout<<"\n Enter the name =";
	cin>>name;
	cout<<"\n Enter the age =";
	cin>>age;
	cout<<"\n Enter the percentage =";
	cin>>num;
	cout<<"\n Enter The Salary=";
	cin>>salary;
	teacher t1;
	t1.setdata(name,age);
	t1.percentage(num);
	t1.entervalue(salary);
	return 0;
}
