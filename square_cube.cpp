#include <stdio.h>
int main()
{
	float square,cube,n;
	printf("ENter a number to find square and cube:");
	scanf("%f",&n);
	square= n*n;
	cube= n*n*n;
	printf("Square of the num is %0.2f\nCube of the num is %0.2f",square,cube);
}
