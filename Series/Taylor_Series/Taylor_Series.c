#include <stdio.h>
#include <math.h>
int main() 
{
    int x_input, n, i = 0 ,power;
    float sum = 0 ,term;
    printf("Enter the number : ");
    scanf("%d", &x_input);
    printf("Enter number of terms: ");
    scanf("%d", & n);
    while (i < n) 
	{
        power = 2 * i + 1;
        term = pow(x_input, power) / power;
        if (i % 2 == 1) 
		{
			term = -term;
		}
        sum = sum + term;
        i++;
    }
    printf("Sum = %f\n", sum);
    return 0;
}

