#include <iostream>
using namespace std;
#include<cstring>
int replaceSameWithStar(char *input,int size,int index)
{
	///base case
	if(index<0){
		return 0;
	}

	///recursive case
	if(input[index]==input[index-1]){
		int a=size;
		while(a<index)
		{
			input[a+1]=input[a];
			a--;
		}
		input[index]='*';
	}
	return replaceSameWithStar(input,size,index-1);
}
int main()
{
	char input[100];
	cin.getline(input,100);
	//cout<<strlen(input)<<endl;
	replaceSameWithStar(input,(strlen(input)-1),(strlen(input)-1));
	cout<<input<<endl;
	return 0;
}