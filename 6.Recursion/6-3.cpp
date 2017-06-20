#include <iostream>
using  namespace std;

void printStar(int number)
{
	///base case
	if(number<=0)
	{
		return;
	}

	//recursive case
	//printStar(number-1);
	for(int i=0;i<number;i++)
	{
		cout<<"* ";
	}
	cout<<endl;
	printStar(number-1);
}
int main()
{
	int number;
	cin>>number;
	printStar(number);
	return 0;
}