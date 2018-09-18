#include<stdio.h>
void main(oll)
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
