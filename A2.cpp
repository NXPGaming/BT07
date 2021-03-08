#include <iostream>

using namespace std;

void f(int a[])
{
	cout<<"\nMang trong ham f la : "<<sizeof(a);
}

int main()
{
    int a[4];
	cout<<"\nMang trong ham main la : "<<sizeof(a);
	f(a);
	system("pause");
	return 0;
}