#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char key[] = "apple";
  char buffer[80]="apple apple apple apple";
  string c=buffer[0];
  int dem=0;
  for(int i=1;i<buffer.length();i++)
  {
      if(buffer[i]==' ')
      {
          if(strcmp(key,c) == 0)
          {
              dem++;
          }
          string c;
      }
      else c += buffer[i];
  }
  cout<<dem;

}
