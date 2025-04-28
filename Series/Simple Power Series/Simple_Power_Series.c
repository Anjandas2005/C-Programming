#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float x, sum = 0, i;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + pow(x, i) / i;
        i++;
    }
    printf("Sum = %.5f\n", sum);
    return 0;
}
