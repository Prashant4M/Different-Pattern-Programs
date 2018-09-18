#include<stdio.h>
void main()
{
	int rows,i,j,space;
	char ch='*';
	printf("Enterthe number of rows you wsnt to print::");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(space=rows-i;space<=rows;space++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for(space=-1;space<=rows-i;space++)
		{
			printf("  ");
		}
		for(j=1;j<=rows-i+1;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
