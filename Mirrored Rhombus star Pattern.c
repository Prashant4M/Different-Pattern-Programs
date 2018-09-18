#include<stdio.h>
void main()
{
	int rows,i,j,space;
	char ch='*';
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf("  ");
		}
		for(j=1;j<=rows;j++)
		{
			printf("%2c",ch);
		}
		printf("\n");
	}
}
