#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year :");
	scanf("%d",&year);
	if (year%4==0){
		printf("%d is a leap Year",year);
	} 
	else if (year%400==0){
		printf("%d is a leap Year",year);
	}
	else if (year%100==0){
		printf("%d is Not a leap Year",year);
	}
	else{
		printf("%d is not a leap year",year);
	}
	return 0;
}
