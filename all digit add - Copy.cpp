#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("enter 6 digit latter=");
	scanf("%d",&a);
	sum=sum+(a%10);
	a=a/10;
	sum=sum+(a%10);
	a=a/10;
	sum=sum+(a%10);
	a=a/10;
	sum=sum+(a%10);
	a=a/10;
	sum=sum+(a%10);
	a=a/10;
	sum=sum+(a%10);
	printf("sum=%d",sum);
	return 0;
}
