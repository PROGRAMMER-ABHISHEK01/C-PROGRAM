#include<stdio.h>
int main()
{
	int row,clm,y,x;
	printf("ENTER ROW AND COLUM OF BOTH METRIX=");
	scanf("%d%d",&row,&clm);
	int a[row][clm],b[row][clm],c[row][clm];
	printf("ENTER ELEMENT IN 1ST METRIX:\n");
	for(x=0;x<row;x++)
	{
		for(y=0;y<clm;y++)
		scanf("%d",&a[x][y]);
	}
	printf("ENTER ELEMENT IN 2ND MATRIX:\n");
	for(x=0;x<row;x++)
	{
		for(y=0;y<clm;y++)
		scanf("%d",&b[x][y]);
	}
	printf("YOUR BOTH MATRIX ARE:\n");
	printf("1ST MATRIX:\n");
	for(x=0;x<row;x++)
	{
		for(y=0;y<clm;y++)
	printf("\t%d",a[x][y]);
	printf("\t\n");
    }
	printf("2ND MATRIX:\n");
	for(x=0;x<row;x++)
	{
		for(y=0;y<clm;y++)
		printf("\t%d",b[x][y]);
		printf("\t\n");
	}
	for(x=0;x<row;x++)
	{
		for(y=0;y<clm;y++)
		c[x][y]=a[x][y]+b[x][y];
	}
	printf("SUM OF BOTH MATRIX ANS IS:\n");
	for(x=0;x<row;x++)
	{
		for(y=0;y<clm;y++)
		printf("\t%d",c[x][y]);
		printf("\t\n");
	}
	return 0;
}
