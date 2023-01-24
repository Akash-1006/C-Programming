#include <stdio.h>

int main()
{
	int rem=0,sum=0,num2;
	printf("Enter the number to print digits of the integer:");
	scanf("%d",&num2);
	while(num2!=0)
	{
		rem=num2%10;
		sum=sum+rem;
		num2=num2/10;
	}
	
      printf("The sum of the given integer is %d",sum);
}
