#include<stdio.h>
int main()
{
	int a,b;
	printf("%c%c%c%c%c YOUR TABLE ARE %c%c%c%c%c\n",25,25,25,25,25,25,25,25,25,25);
	for(a=1;a<=200;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("\t%d\n ",a*b);
		}
		printf("\n%c",3);
	}
	return 0;
}
