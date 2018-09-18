#include<stdio.h>
void main()
{
	int rows,i,j,space;
	char ch='*';
	printf("Enterthe number of rows you wsnt to print::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=0;space<=rows-i;space++)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%2c",ch);
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for(space=0;space<=rows-i;space++)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%2c",ch);
		}
		printf("\n");
	}
}
