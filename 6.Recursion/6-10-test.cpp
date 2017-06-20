#include <iostream>
using  namespace std;
int a[10]={0};
int p=0;
int store(int index)
{
	//static int i;
	//i=0;
	a[p]=index;
	++p;
	return 0;

}
int selectM(int *arr,int size,int select)
{
	//base case
	if(size<0)
		return -1;
	//recursive case
	if(arr[size]==select){
		cout<<"found at size = "<<size<<endl;
		store(size);
	}
	
		selectM(arr,size-1,select);
	

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
	selectM(arr,size-1,select);
	cout<<"in loop"<<endl;
	for(int i=0;i<p;i++)
	{
		
		cout<<a[i]<<endl;
	}
	return 0;
}