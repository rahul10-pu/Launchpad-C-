#include <iostream>
using  namespace std;
int selectM(int *arr,int size,int select)
{
	//base case
	if(size<0)
		return -1;
	//recursive case
	if(arr[size]==select){
		return size;}
	return selectM(arr,size-1,select);
	

	

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
	int y=selectM(arr,size,select);
	cout<<"returned to main function"<<endl;
	cout<<"returned value is "<<y<<endl;
	return 0;
}