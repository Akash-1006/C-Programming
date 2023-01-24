#include <stdio.h>

int main()
{
	int rem=0,i=0,j,num2,arr[100];
	printf("Enter the number to print digits of the integer:");
	scanf("%d",&num2);
	while(num2!=0)
	{
		rem=num2%10;
		arr[i]=rem;
		i++;
		num2=num2/10;
	}
    for(j=i-1;j>=0;j--){
	 printf("%d\n",arr[j]);
      }
}
