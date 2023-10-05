#include<stdio.h>
int main()
{
	int row,clm,i,j;
printf(" enter row and column of both matrix = ");
	scanf("%d%d",&row,&clm);
int a[row][clm],b[row][clm],c[row][clm];
	printf("enter element in 1st matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		scanf("%d",&a[i][j]);
	}
		printf("\nenter element in 2nd matrix :\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		scanf("%d",&b[i][j]);
	}
	printf("\n your both matrix are :\n");
	printf(" 1st matrix : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		printf("\t%d",a[i][j]);
		printf("\t\n");
	}
	printf(" 2nd matrix : \n");
   		for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		printf("\t%d",b[i][j]);
		printf("\t\n");
	}
   for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	 printf("\nsum of both matrix is : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		printf("\t%d",c[i][j]);
		printf("\t\n");
	}
	return 0;
}
