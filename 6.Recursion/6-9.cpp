#include <iostream>
using  namespace std;
int selectM(int *arr,int size,int select)
{
	//base case
	if(size<0)
		return -1;
	//recursive case
	if(arr[size]==select)
		return size;
	selectM(arr,size-1,select);
	//return 12;
	cout<<"backtracking"<<endl;

}
int main()
{
	int size;
	cin>>size;
	//int *arr= new int[size];
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int select;
	cin>>select;
	cout<<selectM(arr,size-1,select);
	return 0;
}