/*2. Define a class to represent a bank account. Include the
following members:

										3. Data Member:
Topics Covered
Basic Concepts of OOP
Topics Covered
Basic Concepts of OOP
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
										Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;
class Bankaccount
{
   private:
   	       string name;
           double accno;
           string acctype;
           double balance;   
   public :
		void set(double a,double b,string acc,string n)
		{
			accno = a;
			balance = b;
			acctype=acc;
			name=n;
		}
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<" Rs. credited";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<" Rs. debited";
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\nName Of Depositor:"<<name;
			cout<<"\nAccount Type:"<<acctype;
			cout<<"\nCurrent balance = "<<balance;
		}
};
int main()
{
	Bankaccount b1;
	b1.set(123456,10000,"Saving_account","Dodiya Yuvarj");
	b1.deposit(5000);
	b1.withdraw(10000);
	b1.get();
	return 0;
}
