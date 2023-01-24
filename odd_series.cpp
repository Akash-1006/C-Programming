#include <stdio.h>

int main()
{
	int a=1,n;
	printf("Enter the range to print the odd num series:");
	scanf("%d",&n);
	while(a<=n){
		printf("%d ",a);
		a=a+2;
	}
	
}
