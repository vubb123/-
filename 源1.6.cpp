#include<iostream>
using namespace std;
int max(int a, int b, int c)
{
	if (b > a)a = b;
	if (c > a)a = c;
	return a;

}
float max(float a, float b)
{
	if (b > a)a = b;
	else a = a;
	return a;
}
int main()
{
	int a=22, b=33.33, c=334;
	

	cout << "max_i=" << max(a, b, c)<<endl;
	cout << "max_f=" << max(a,b)<<endl;

	
}