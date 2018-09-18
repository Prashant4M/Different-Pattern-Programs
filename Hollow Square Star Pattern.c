#include<stdio.h>
void main()
{
	int rows,i,j;
	char ch='*';
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i==1||i==rows||j==1||j==rows)
			{
				printf("%2c",ch);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
