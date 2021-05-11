#include<stdio.h>
int main()
{
	int celsius;
	float faranite;
	printf("enter the celsius :");
	scanf("%d",&celsius);
	faranite=(celsius*1.8)+32;
	printf("faranite = %f", faranite);
	return 0;
}
