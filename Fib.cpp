#include <stdio.h>

int main()
{
	int F0=0,F1=1,Fib,a=1,n;
	printf("Enter the range to print the fibonacci series:");
	scanf("%d",&n);
	printf("%d %d ",F0,F1);
	while(a<=n){
		Fib=F0+F1;
		printf("%d ",Fib);
		F0=F1;
		F1=Fib;
		a++;
	}
	
}
