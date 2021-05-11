#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if (n<0){
		printf("%d is a Negative Number",n);
	}
	else{
		printf("%d is Positive Number",n);
	}
	return 0;
}
