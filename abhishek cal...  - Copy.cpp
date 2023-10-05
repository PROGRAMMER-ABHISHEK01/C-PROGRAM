#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10000],c=0,d=0,e=1;
	int choice,b;
	while(1)
	{
		printf("%c%c%cENTER YOUR CHOICE%c%c%c\n",4,4,4,4,4,4);
		printf("1.ADD\n");
		printf("2.SUBTRECT\n");
		printf("3.MULTIPAL\n");
		printf("4.DIVISON\n");
		printf("5.EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("ENTER NUMBER ----- AND YOU STOP ADDING PRESS '0'(ZERO)-----\n");
			for(b=0;b<=10000;b++)
			{
			  scanf("%d",&a[b]);
			  c++;
			  if(a[b]==0)
			  break;
			}
			for(b=0;b<c-1;b++)
			{
				d=d+a[b];
			}
			printf("----- ANS ----%c",26);
			printf(" %d \n\n",d);
			break;
			case 2:
			printf("ENTER NUMBER ----- AND YOU STOP SUBTRACTION PRESS '0'(ZERO)-----\n");
			for(b=0;b<=10000;b++)
			{
			  scanf("%d",&a[b]);
			  c++;
			  if(a[b]==0)
			  break;
			}
			for(b=0;b<c-1;b++)
			{
				d=d+a[b+1];
			}
			b=0;
			printf("----- ANS ----%c",26);
			printf(" %d \n\n",-d+a[b]);
			break;
			case 3:
			printf("ENTER NUMBER ----- AND YOU STOP MULTIPLY PRESS '1'(ONE)-----\n");
			for(b=1;b<=10000;b++)
			{
			  scanf("%d",&a[b]);
			  c++;
			  if(a[b]==1)
			  break;
			}
			for(b=1;b<c*1;b++)
			{
				e=e*a[b];
			}
			printf("----- ANS ----%c",26);
			printf(" %d \n\n",e);
			break;	
			case 4:
				printf("ENTER NUMBER ----- AND YOU STOP SUBTRACTION PRESS '0'(ZERO)-----\n");
			for(b=0;b<=10000;b++)
			{
			  scanf("%d",&a[b]);
			  c++;
			  if(a[b]==0)
			  break;
			}
			for(b=0;b<c-1;b++)
			{
				d=d+a[b+1];
			}
			b=0;
			printf("----- ANS ----%c",26);
			printf(" %d \n\n",d/a[b]);
			break;
			case 5:
			exit(0);
			break;
			default:
				printf("INVALID CHOICE\n\n");
		}
	}
	return 0;
}
