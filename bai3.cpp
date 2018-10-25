#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int a,b;
	float thuong;
	char pheptoan;
	int confirm;
	do{
	cout<<" gia tri a:";
	cin>>a;
	cout<<" nhap phep toan:";
	cin>>pheptoan;
	cout<<" gia tri b:";
	cin>>b;
	switch (pheptoan)
	{
		case '+' :
			cout<<" phep tong:"<<a+b;
			break;
		case '-' :
			cout<<" phep tru :"<<a-b;
			break;
		case '*' :
			cout<<" phep nhan:"<<a*b;
			break;
		case '/' :
			if(b!=0)
			{
				thuong= float(a)/float(b);
				cout<<" phep chia:";
				cin>>thuong;
			}
			else
			{
				 cout<<" ko co gia tri";
				 break;
			}
	}
	cout<<" ban co muon nhap tiep ko:"; // 1 la co, 0 la khong
	cin>>confirm;
	}while(confirm == 1 || confirm == 1);
	return 0;
}
