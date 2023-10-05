#include<stdio.h>
int main()
{
	int a,b,c,d;
	int *x,*y,*z;
	x=&a,y=&b,z=&c;
	printf("ENTER THREE NUMBER AND FIND SUM AND ADDRES:::");
	scanf("%u%u%u",&a,&b,&c);
	d=*x+*y+*z;
	printf("ADD ANS:- %u",d);
	printf("\nADDRESS OF a: %u",&a);
	printf("\nADDRESS OF b: %u",&b);
	printf("\nADDRESS OF c: %u",&c);
	return 0;
}
