#include <stdio.h>

int main()
{
	int a=2,n;
	printf("Enter the range to print the even num series:");
	scanf("%d",&n);
	while(a<=n){
		printf("%d ",a);
		a=a+2;
	}
	
}
