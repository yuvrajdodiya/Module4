//1. WAP to create simple calculator using class

#include<iostream>
using namespace std;
class calculator
{
	private:
		int num1,num2,ans;
		public:
			void add()
			{
				cout<<"\n Enter The Number1:";
				cin>>num1;
				cout<<"\n Enter The Number2:";
				cin>>num2;
				ans=num1+num2;
				cout<<"\n Addition Ans:"<<ans;
			}
			void sub()
			{
				cout<<"\n Enter The Number1:";
				cin>>num1;
				cout<<"\n Enter The Number2:";
				cin>>num2;
				ans=num1-num2;
				cout<<"\n Substraction ans:"<<ans;
			}
			void multi()
			{
				cout<<"\n Enter The Number1:";
				cin>>num1;
				cout<<"\n Enter The Number2:";
				cin>>num2;
				ans=num1*num2;
				cout<<"\n Multiplication ans:"<<ans;
			}
			void div()
			{
			    cout<<"\n Enter The Number1:";
				cin>>num1;
				cout<<"\n Enter The Number2:";
				cin>>num2;
				ans=num1/num2;
				cout<<"\n Division ans:"<<ans;
			}
};
int main()
{
	calculator c1;
	c1.add();
	c1.sub();
	c1.multi();
	c1.div();
}
