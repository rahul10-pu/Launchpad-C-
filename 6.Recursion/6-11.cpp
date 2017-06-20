#include <iostream>
using  namespace std;
int check=0;
bool checkForPalindrome(int *arr,int size,int totalSize)
{
	//base case
	if(size<(totalSize/2))
		return false;
	//recursive case
	if(arr[size]==arr[check])
	{
			if (size==check)//for odd number of input
			{
				return true;		
			}else if((size-check)==1)//for even number of input
			{
				return true;
			}
			++check;
	}
	
	return checkForPalindrome(arr,size-1,totalSize);

}
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<checkForPalindrome(arr,size,size);
	return 0;
}