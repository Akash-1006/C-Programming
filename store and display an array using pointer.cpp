#include <stdio.h>
main() {
    int *data[20],n,i;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	if(n>0){
    for (i = 0; i < n; i++){
    	printf("Element %d: ",i);
        scanf("%d", data + i);
	}
    printf("You entered: \n");
    for (i = 0; i < n; i++)
        printf("Element %d: %d\n",i, *(data + i));
    }
    else{
    	printf("Invalid input");
	}
}
	
