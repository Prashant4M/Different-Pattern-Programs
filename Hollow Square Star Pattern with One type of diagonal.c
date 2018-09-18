#include<stdio.h>
void main()
{
	int rows,i,j;
	char ch='*';
	printf("Enter the number of rows::");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--) // Just Interchange the for(i=1;i<=rows;i++) for another diagonal
		{
		for(j=1;j<=rows;j++)
		{
			if(i==1||i==rows||j==1||j==rows||i==j) //Or put here (||rows-i+1==j) for another diagonal instead of (i==j)
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
