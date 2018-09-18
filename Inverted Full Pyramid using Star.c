#include<stdio.h>
void main()
{
	int rows,i,space,j;
	char ch='*';
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
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

