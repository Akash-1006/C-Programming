#include <stdio.h>

int main()
{
	int num1,num2,temp;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	printf(" Before Swapping...\n number 1 = %d\n number 2 = %d\n",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf(" After Swapping...\n number 1 = %d\n number 2 = %d",num1,num2);
}
