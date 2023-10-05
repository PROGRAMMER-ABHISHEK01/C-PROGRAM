/*new file create program*/
#include<stdio.h>
int main()
{
	FILE *ap;
	ap=fopen("D:\\abhishekkumar\\ABHISHEK-KUMAR.txt","w");
	if(ap==0)
	{
	printf("SORRY");
    }
    else
    {
    printf("WELCOME");
	}
	return 0;
}
