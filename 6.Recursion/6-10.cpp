#include <iostream>
using  namespace std;
//here i had sent the  variable index from main to user function which was wrong
//as value of index was incremented in main but it's oringnal value for mian was stil 0
int index=0;
int *selectM(int *arr,int size,int select,int *recordM)
{
	//base case
	if(size<0)
		return recordM;
	//recursive case
	if(arr[size]==select){
		//cout<<"found at size = "<<size<<endl;
		recordM[index]=size;
		//cout<<"stored at index = "<<index<<endl;
	//	cout<<"stored = "<<recordM[index]<<endl;

		++index;
	}
	
		return selectM(arr,size-1,select,recordM);
	

}
int main()
{
	int size;
	cin>>size;
	//int *arr= new int[size];
	int arr[size];
	int recordM[size];
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int select;
	cin>>select;
	int *a;
	a=selectM(arr,size-1,select,recordM);
	cout<<"returned in main function and proceeding to loop"<<endl;
	cout<<"here value of index= "<<index<<endl;
	for(int i=0;i<index;i++)
	{
		
		cout<<"found at index= "<<a[i]<<endl;
	}
	return 0;
}