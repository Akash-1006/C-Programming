#include<stdio.h>
main() {
 int num,t,n,i,nont,stu;
 printf("Enter the total number of user :");
 scanf("%d",&n);
 printf("Enter the number of teaching staff :");
 scanf("%d",&t);
 if(n>0 && t>0 && n>t+t/3){
 nont=t/3;
 stu=n-(t+nont);
 printf("Student users : %d",stu);
}
else{
	printf("Invalid input");
}
}

