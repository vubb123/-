#include<iostream>
using namespace std;
template<typename T>
T max(T a, T b, T c)
{
	if (b > a)a = b;
	if (c > a)a = c;
	return a;
}

int main()
{
	int i1, i2, i3,i;
	float j1, j2, j3,j;
	cin >> i1 >> i2 >> i3;
	cin >> j1 >> j2 >> j3;
	i = max(i1, i2, i3);
	j = max(j1, j2, j3);
	cout << "max_i=" << i << endl;
	cout << "max_j=" << j << endl;
	return 0;

	
}
