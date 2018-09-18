#include<stdio.h>
void main()
{
	int rows,i,j,k;
	char ch='*';
	printf("Enter the number of rows to be printed::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2c",ch);
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%2c",ch);	
		}
		printf("\n");
	}
}
