#include<iostream>
#include<string>
using namespace std;
template<typename T>
void sort(T a[])
{
	
	T t;
	int i=0, j=0;
	for (i = 0; i < 5; i++)
		if (a[i] > a[j])i = j;
		t = a[i]; a[i] = a[j]; a[j] = t;
	for (i = 0; i < 5; i++)
		cout << a[i];
}

int main()
{
	
	int a[5] = { 12,34,55 };
		float b[5] = { 23.4545,3435.4656,23.55 };
	sort(a);
	sort(b);

	return 0;
}


