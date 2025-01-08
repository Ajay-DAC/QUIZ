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
	return 0;
}


//under namespace we can define class methode function , variable
