#include <stdio.h>
int main() {
	int i,j,k=1;
	printf("Enter a number to print table:");
	scanf("%d",&i);
	printf("Enter a number to end the table:");
	scanf("%d",&j);
	while(k<=j)
	{
		printf("%d x %d = %d\n",k,i,i*k);
		k++;
		
	}
	}
