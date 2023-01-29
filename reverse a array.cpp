#include <stdio.h>
#include <stdlib.h>
int main(){
	 int i,n,arr[100],temp;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
