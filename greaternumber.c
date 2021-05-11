#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter first number :");
	scanf("%d",&a);
	printf(" enter second number :");
	scanf(" %d",&b);
	printf(" enter three number :");
	scanf("%d",&c);
	if( a>b && a>c){
		printf("%d is greater",a);
	} 
	else if (b>a && b>c){
		printf("%d is Greater",b);
	}
	else{
		printf("%d is Greater",c);
	}
	
}
