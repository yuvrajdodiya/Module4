//4.Write a C++ Program display Student Mark sheet using Multiple inheritance
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
	       	  cout<<"\nEnter the name :";
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
class Marks
{
	protected:
		int phy,chem,math,total;
		float percentage;
    public:
    	void setdata()
    	{
    		cout<<"\nEnter the physics marks:";
    		cin>>phy;
    		cout<<"\nEnter the chemistry marks:";
    		cin>>chem;
    		cout<<"\nenter the math marks:";
    		cin>>math;
		}
		void getdata()
		{
			cout<<"\nPhysics Marks:"<<phy;
			cout<<"\nChemistry Marks:"<<chem;
			cout<<"\nMath Marks:"<<math;
		}
		void calculatemarks()
		{
			total=phy+chem+math;
			cout<<"\nTotal Marks:"<<total;
		}
		void calculatepercentage()
		{
			percentage=(float)total / 3;
			cout<<"\n Percentage ="<<percentage;
		}
		
};
class Marksheet:public Student,public Marks
{
	public:
		void display()
		{
			cout<<"\n Marks_Sheet:";
		    getvalue();
		    getdata();
		    calculatemarks();
		    calculatepercentage();
		}
};
int main()
{
	Marksheet m1;
	m1.setvalue();
	m1.setdata();
	m1.display();
	return 0;
}
