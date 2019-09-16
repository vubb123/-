#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i,  n;
	char temp;
	cin>>str;
	n = str.size();
	for (i = 0; i < n / 2; i++)
		 {
		temp = str[i];
		str[i] = str[n - i-1 ];
		str[n - i-1 ] = temp;
	}
	cout << str;
	return 0;



}