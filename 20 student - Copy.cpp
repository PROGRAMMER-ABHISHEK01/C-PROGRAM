#include<stdio.h>
struct student
{
  char name[10];
  float per;	
};
int main()
{
	struct student a[10];
	int x,y,high;
	for(x=0;x<=9;x++)
	{
		printf("ENTER YOUR NAME: ");
		gets(a[x].name);
		printf("ENTER YOUR PERCENTAGE: ");
		scanf("%.2f",&a[x].per);
		fflush(stdin);
	}
	high=a[0].per;
	for(x=1;x<=9;x++)
	{
		if(high<a[x].per)
		{
			y=x;
		}
	}
	printf("HIGEST PERCENTAGE STUDENT NAME IS: %s",a[y].name);
	return 0;
}
