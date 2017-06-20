#include <iostream>
using namespace std;

void printOdd(int number)	//if there is void then there will be only return;
{
	///BAse case
	if(number<=0)
	{
		return;
	}

	///recursive case

	if((number%2)==0){
		printOdd(number-1);
	}
	else
	{
		cout<< number<<endl;
		printOdd(number-2);
	}

}
void printEven(int number)
{
	///bas case
	if(number<=0)
	{
		return; 
	}

	//recursive case
	if((number%2)==0)
	{
		printEven(number-2);
		cout<<number<<endl;
	}
	else
	{
		printEven(number-1);
	}
}
void oddeven(int number)
{
	//base case
	if(number<=0)
	{
		return;
	}

	///recursive case
	if((number%2)==0)	//if this condition is true then only this will be used in every recursive call
	{
		cout<<number-1<<endl;
		oddeven(number-2);
		cout<<number<<endl;

	}
	else	//if this condition is true then only this will be used in every recursive call
	{
		cout<<number<<endl;
		oddeven(number-2);
		if((number-1)==0)
		{
			return;
		}
		cout<<number-1<<endl;
	}
}
int main()
{
	int number;
	cin>>number;
	//printOdd(number);	//decreasing sequence
	//cout<<"now printEven"<<endl;
	//printEven(number);	//increasing sequence
	oddeven(number);
	return 0;
}