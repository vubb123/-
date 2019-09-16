#include<iostream>
using namespace std;
int main()
{
	int a, b, c,k;
	cin >> a >> b >> c;
	int max(int a,int  b,int  c);
	k = max(a, b, c);
	cout << k << endl;
	return 0;
}
int max(int a, int b, int c)
{
	int j;
	if (a > b) j = a;
	else j = b;
	if (c > j)j = c;
	return (j);
}