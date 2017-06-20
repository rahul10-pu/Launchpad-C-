#include <iostream>
using  namespace std;
int decs=0;
int asce=0;
int checkfunc=0;
int checkForSortedArray(int *arr,int size,int check)
{
	
	//base condition
	if(size<0)
	{
		return false;
	}
	//check for descending order
	if(arr[size]<=arr[size-1])
	{	
		++decs;	
		if(decs==check)
		{
			cout<<"sorted in descending order"<<endl;
			return 1;
		}
	}
	checkForSortedArray(arr,size-1,check);

		++checkfunc;
	if(checkfunc==(check+1)){
		cout<<"not in sorted order"<<endl;
		return false;
	}
	//
	if(arr[size]<=arr[size+1])
	{
		++asce;
		if(asce==check){
	
			cout<<"sorted in ascending order"<<endl;
	}
	}


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
	checkForSortedArray(arr,size-1,size-1);
	return 0;
}