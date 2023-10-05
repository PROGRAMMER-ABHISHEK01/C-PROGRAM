#include<stdio.h>
int main()
{
	int a=99;
	int *aa;
	aa=&a;
	printf("%d",*aa);
	printf("\n%d",&a);
	return 0;
}
