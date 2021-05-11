#include <stdio.h>
int main()
{
    int pri, time;
    float rate,si;

    printf("Enter the Principle amount :");
    scanf("%d", &pri);

    printf("Enter the rate :");
    scanf("%f", &rate);

    printf("Enter the Time :");
    scanf("%d", &time);
    si=(pri*rate*time)/100;

    printf("Simple Intrest : %f", si);
    return 0;
}
