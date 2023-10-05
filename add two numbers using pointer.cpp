//add two numbers using pointer
#include<stdio.h>
int main()
{
	int n,n1,*p,*p1;
	p=&n;
	p1=&n1;
	printf("enter two number=");
	scanf("%d%d",&n,&n1);
	printf("add ans is=%d",*p+*p1);
	return 0;
}
