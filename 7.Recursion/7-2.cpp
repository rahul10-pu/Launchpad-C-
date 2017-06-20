#include <iostream>
#include <string>
using namespace std;
int printDigitInRecurrence(string input,int size)
{
	//base case
	if(size<0)
	{
		cout<<endl;
		return 0;
	}
	printDigitInRecurrence(input,size-1);
	cout<<(input[size]-'0');
}
int main()
{
	string input;
	cin>>input;
	int size=input.size();
	//int digit=input[0]-'0';
	//cout<<digit<<endl;
	printDigitInRecurrence(input,size-1);
	return 0;
}
/*here I can do 3 things:-
	1. can start printing character from start to end till we met "/0".
	2. can use tail recursion.
	3. can convert string to intiger.*/