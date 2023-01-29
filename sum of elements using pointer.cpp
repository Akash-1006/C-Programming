#include<stdio.h>
int main()
{
int arr[10],n,i,sum=0,*p=arr;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum+=*p;
*p++;
}
printf("Sum=%d",sum);
return 0;
}

