#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i;
	string str[5] = { "i","love","fish","c" };
	void sort(string str[]);
	sort(str);
	for (i = 0; i < 5; i++)
		cout << str[i] << endl;
	
	 return 0;

}
void sort(string str[])
{
	int i, j;
	string t;
	for (j = 0; j < 5; j++)
		for(j=0;j<5-i;j++)
			if (str[j] > str[j+ 1])
			{
				t = str[j];
				str[j] = str[j+ 1];
				str[j + 1] = t;
			}
}