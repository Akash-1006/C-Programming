#include <stdio.h>

int main()
{
	int a=1,n,sum=0;
	printf("Enter the range to print the sum of series:");
	scanf("%d",&n);
	while(a<=n){
		sum=sum+(a*a*a);
		a++;
	}
	printf("%d",sum);
}
