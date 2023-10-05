#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,x,y,z;
	while(1)
	{
		printf("---ENTER YOUR CHOICE----\n\n");
		printf("1.ADDITION\n");
		printf("2.SUBTRECTION\n");
		printf("3.MULTIPLTION\n");
		printf("4.DIVISION\n");
		printf("5.REMINDER\n");
		printf("6.EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("ENTER TWO NUMBER=");
				scanf("%d%d",&x,&y);
				z=x+y;
				printf("ADD ANS IS=%d\n",z);
				break;
				case 2:
				printf("ENTER TWO NUMBER=");
				scanf("%d%d",&x,&y);
				z=x-y;
				printf("SUB ANS IS=%d\n",z);
				break;
				case 3:
				printf("ENTER TWO NUMBER=");
				scanf("%d%d",&x,&y);
				z=x*y;
				printf("MUL ANS IS=%d\n",z);
				break;
				case 4:
				printf("ENTER TWO NUMBER=");
				scanf("%d%d",&x,&y);
				z=x/y;
				printf("DIVIDE ANS IS=%d\n",z);
				break;
				case 5:
				printf("ENTER TWO NUMBER=");
				scanf("%d%d",&x,&y);
				z=x%y;
				printf("REMONDER ANS IS=%d\n",z);
				break;
				case 6:
				exit(0);
				break;
				default:
				printf("INVALID CHOICE\n");
		}
	}
	return 0;
}
