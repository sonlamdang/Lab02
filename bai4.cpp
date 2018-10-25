#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	float a,b,c,d,s,s1,s2,s3,confirm,thuong;
	char pheptoan;
	do{
	
	cout<<" nhap phan so thu 1 gom tu a va mau b:";
	cin>>a>>b;
	cout<<" nhap phep toan:";
	cin>>pheptoan;
	cout<<" nhap phan so thu 2 gom tu c va mau d:";
	cin>>c>>d;
		switch (pheptoan)
	{
		case '+' :
			cout<<" phep tong:"<<(((a*d)+(b*c))/(b*d));
			break;
		case '-' :
			cout<<" phep tru :"<<(((a*d)-(b*c))/(b*d));
			break;
		case '*' :
			cout<<" phep nhan:"<<((a*c)/(b*d));
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

	if(b!=0&&d!=0&&pheptoan=='+')
	{
		s=(((a*d)+(b*c))/(b*d));
		cin>>s;
	if(b!=0&&d!=0&&pheptoan=='-')	
		s1=(((a*d)-(b*c))/(b*d));
		cin>>s1;
	if(b!=0&&d!=0&&pheptoan=='*')	
		s2=((a*c)/(b*d));
		cin>>s2;
	   
	}
	if(c!=0&&b!=0&&d!=0&&pheptoan=='/')
	{	
		s3=((a*d)/(b*c));
	cin>>s3;
	  
	}
	cout<<" ban co muon nhap tiep ko:"; // 1 la co , 0 la khong
	cin>>confirm;
	}while(confirm == 1 || confirm == 1);

	
	return 0;

}
