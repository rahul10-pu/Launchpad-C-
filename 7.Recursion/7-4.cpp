#include <iostream>
using namespace std;
#include <string>
bool checkIfPalindrome(string str,int start,int end)
{
	///base case
	if (end<start){
		return true;
	}
	//recursive case
	if(str[start]==str[end]){
		return checkIfPalindrome(str,start+1,end-1);
	}
	else{
		return false;
	}
}
int main()
{
	string str;
	getline(cin,str);
	cout<<checkIfPalindrome(str,0,(int)str.size()-1)<<endl;
	//cout<<str<<'\n'<<str[str.size()-1]<<endl;
	return 0;
}