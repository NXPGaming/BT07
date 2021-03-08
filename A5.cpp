#include <iostream>

using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}



int main()
{
    cout<<weird_string();
    //output k in ra được gì nghĩa là return của hàm weird_string với địa chỉ k xác định
	return 0;
}
