#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
	int *a = new int [n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int i=0,j=n;
    while(i!=j && a[i]!=x)
    {
        int s=(i+j)/2;
        if(a[s] > x)
        {
            j=s;
        }
        else
        {
            i=s;
        }
    }
    cout<<"\na = "<<a[i];
	delete []a;
	return 0;
}
