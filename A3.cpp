#include <iostream>

using namespace std;

int count_even(int*a, int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 == 0)
		{
			return a[i];
		}
	}
}

int main()
{
	int *a= new int[10]{1,1,1,1,1,2,1,1,1,1};
	cout<<count_even(a,10);
	system ("pause");
	return 0;
}