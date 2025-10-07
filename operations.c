#include<stdio.h>
int main()
{
    int a;
    printf("Enter the first number - ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number - ");
    scanf("%d",&b);
    int addition = a+b;
    printf("%d\n",addition);
    int subtraction = a-b;
    printf("%d\n",subtraction);
    int multiplication = a*b;
    printf("%d\n",multiplication);
    int division = a/b;
    printf("%d\n",division);
    
    return 0;
}
