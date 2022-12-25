#include <stdio.h>
#include <stdlib.h>
int factorial(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * factorial(x - 1);
}
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    printf("Factorial of %d is : %d", num, factorial(num));
}