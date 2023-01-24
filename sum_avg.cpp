#include <stdio.h>

int main()
{
	int a=1,n,sum=0,avg=0;
	printf("Enter the range to print the sum and average of series:");
	scanf("%d",&n);
	while(a<=n){
		sum=sum+a;
		avg=sum/n;
		a++;
	}
	printf("Sum of n number is %d\n",sum);
	printf("Avg of n number is %d",avg);
}
