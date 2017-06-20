#include <iostream>
using  namespace std;

int printTriangle(int number)
{
	///base case
	if(number<=0)
	{
		return 0;
	}

	return number+printTriangle(number-1);

}
int main()
{
	int number;
	cin>>number;
	cout<<printTriangle(number)<<endl;
	return 0;
}