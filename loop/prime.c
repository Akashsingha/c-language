        // Prime number  

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i > 1)
        {
            printf("%d is not a prime number\n", n);
            goto label;
        }
    }
    printf("%d is a prime number\n", n);
label:
    return 0;
}