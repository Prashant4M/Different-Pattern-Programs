#include<stdio.h>
void main()
{
	int rows=5,i,j,space;
	for(i=3;i<=5;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		for(space=3;space<=2*i-1;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
