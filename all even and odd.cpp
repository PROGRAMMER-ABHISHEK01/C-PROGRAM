#include<stdio.h>
int main()
{
	int a,x;
	printf("ENTER A NUMBER TO FIND EVEN & ODD: ");
	scanf("%d",&a);
	//printf("EVEN");
	for(x=a;x<=a;x++)
	{
		if(x%2==0)
		{
			printf("%d,",x);
		}
	}
	return 0;
}
