#include<stdio.h>
int main()
{
	int a,b;
	int *c,*d;
	c=&a,d=&b;             //only address use this //
	printf("ENTER TWO NUMBER=");
	scanf("%u%u",&*c,&*d);
	printf("SUM=%u",*c+*d);
	return 0;
}
