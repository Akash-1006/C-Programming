#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%f",&age);
	if(age>=18)
	{
		printf("You are eligible for voting");
	}
	else
	printf("You can vote in %f years",(18-age));
	
}
