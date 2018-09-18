#include<stdio.h>
void main()
{
	int rows,i,space,j;
	char ch='*';
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(space=rows-i;space>=0;space--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%2c",ch);
		}
		printf("\n");
	}
}
