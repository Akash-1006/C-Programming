#include <stdio.h>

int main()
{
	int a=2,n;
	printf("Enter a number to check positve or negative:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("The given number %d is positive",n);
		
	}
	else if(n==0)
	{
		printf("The given number %d is neither postive nor negative",n);
	}
	else
	{
		printf("The given number %d is negative",n);
	}
	}
