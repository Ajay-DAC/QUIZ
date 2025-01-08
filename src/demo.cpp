<<<<<<< HEAD
#include<iostream>
using namespace std;


int main()
{
	cout<<"Hello world";
=======
#include<cstdio>
namespace na{
int num1=100;
}
namespace nb{
int num1=200;
}
int num1=50;

int main()
{
	int num1=25;
	printf("NUM 1 of local :  %d\n",num1);
	printf("NUM 1 of global :  %d\n",::num1);
	printf("NUM 1 of na :  %d\n",na::num1);
	printf("NUM 1 of nb :  %d\n",nb::num1);
>>>>>>> 118ecccd2466805094894776d5f7b5292bd63ad3
	return 0;
}


<<<<<<< HEAD
=======
//under namespace we can define class methode function , variable
>>>>>>> 118ecccd2466805094894776d5f7b5292bd63ad3
