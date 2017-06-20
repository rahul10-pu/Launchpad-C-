#include <iostream>
using namespace std;
#include<cstring>
int deleteDuplicate(char *input,int size,int index)
{
	///base case
	if(input[index]=='\0'){
		return 0;
	}

	///recursive case
	if(input[index]==input[index+1]){
		int a=index;
		while(a<=size)
		{
			input[a]=input[a+1];
			a++;
		}
		return deleteDuplicate(input,strlen(input),index);
		
	}
	return deleteDuplicate(input,strlen(input),index+1);
	
}
int main()
{
	char input[100];
	cin.getline(input,100);
	//cout<<strlen(input)<<endl;
	deleteDuplicate(input,(strlen(input)),0);
	cout<<input<<endl;
	return 0;
}