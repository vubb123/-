#include<iostream>
using namespace std;
inline int power(int x)
{
	return (x*x);
}
int main()
{
	cout << power(2) << endl;
	cout << power(1 + 1) << endl;
	return 0;
}