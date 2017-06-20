#include <iostream>
#include <string>
using namespace std;
bool isStr1IsReverseOfStr2(string str1,int s1,string str2,int s2)
{
	//base case
	if(str1[s1]=='\0')//if atr1 reaches to end,it means all checked characters are reverse
						//hence return true which return true,return true....till end
	{
		return true;
	}
	//recursive case
	if(str1[s1]==str2[s2]){
		return isStr1IsReverseOfStr2(str1,s1+1,str2,s2-1);
	}else{
		return false;//here condition fails for one char hence return false,return false...till end;
	}
}
int main ()
{
  string str1,str2;
  getline (std::cin,str1);
  getline (std::cin,str2);
  //check if str2 is reverse of str1,and print true or false
  if(str1.size() != str2.size())
  {	
  	cout<<false<<endl;
  }else{
  	cout<<isStr1IsReverseOfStr2(str1,0,str2,((int)str2.size())-1)<<endl;
	}
  return 0;
}