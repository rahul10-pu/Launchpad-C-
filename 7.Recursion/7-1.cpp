#include <iostream>
#include <string>
using namespace std;
int sumOfDigitInRecurrence(string input,int size)
{
	//base case
	if(size<0)
	{
		return 0;
	}
	return (input[size]-'0')+sumOfDigitInRecurrence(input,size-1);
}
int main()
{
	string input;
	cin>>input;
	int size=input.size();
	//int digit=input[0]-'0';
	//cout<<digit<<endl;
	cout<<sumOfDigitInRecurrence(input,size-1);
	return 0;
}
/*here we can do two things:-
	1. we can start ading character from begining to end till base case '\0'.
	2. we can use tail recursion by adding one more argument 
	   in "return sumOfDigitInRecurrence(input,size-1,(input[size]-'0')+0);" */