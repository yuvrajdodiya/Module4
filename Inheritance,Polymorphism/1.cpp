/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class Cricketer
{
	protected:
		string name;
		int match;
		public:
			void inputdata(string n,int m)
			{
				name=n;
				match=m;
			}
			void display()
			{
				cout<<"\nName:"<<name;
				cout<<"\nMatch:"<<match;
			}
		
			
};
class batsman:public Cricketer
{
	private:
        int run;
		float avg;
		string performance;
	public:
		void setdata()
		{
			cout<<"\nEnter the totle run to all plyers:";
			cin>>run;
			cout<<"\nperformance=";
			cin>>performance;
		}
		void calculateaverage()
		{
			Cricketer::display();
			avg=(float)run/(float)match;
		}
		void displaydata()
		{
			cout<<"\nTotalrun:"<<run;
			cout<<"\nAverage:"<<avg;
			cout<<"\nPerformance:"<<performance;
		}
};
int main()
{

	batsman b1;
	b1.inputdata("yuvarjsinh",5);
	b1.setdata();
	b1.calculateaverage();
	b1.displaydata();
	return 0;
}
