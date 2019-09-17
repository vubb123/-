#include<iostream>
#include<string>
using namespace std;
int main()
{
	void sort(string str[]);
	int i,j=0;
	string str[5];
for(i=0;i<5;i++)
{	cin>>str[i];}
sort(str);
for(i=0;i<5;i++)
{	cout<<endl<<str[i];}	
	return 0;
}
 void sort (string str[])
{
  int i,j;
  string temp;
  for(i=0;i<5;i++)
	  for(j=0;j<5-i-1;j++)
		  if(str[j]>str[j+1])
		  {
			  temp=str[j];
		       str[j]=str[j+1];
			   str[j+1]=temp;
		  }
}
