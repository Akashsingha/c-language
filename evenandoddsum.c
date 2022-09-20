#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10], i, e[10], o[10], j, k, length;
    float suma = 0;
    float sumb = 0;

    printf("Enter 10 number:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]); /* Taking 10 input from user */
    };
    for (i = 0; i < 10; i++) /* for incresing the value of  */
    {
        if (a[i] % 2 == 0) /* Extracting even number */
        {
            a[i] = e[i]; /* Taking even number her */
            // printf("%d even no\n", e[i]);
        }
        else /* Extracting odd number */
        {
            a[i] = o[i]; /* Taking odd number her */
            // printf("%d odd no\n", o[i]);
        }
        printf("%d even no\n", e[i]);
        printf("%d odd no\n", o[i]);
    }

    //     /* Calculatting the length */
    //     // ae--;
    //     // int lengtheven = e[10] - e[ae]; /* eliminating extra blank boxes */
    //     // ao--;
    //     // int lengtheven = e[10] - e[ao]; /* eliminating extra blank boxes */
    //     printf("Sum of Even no :\n ");

    //     for (j = 0; j < ae; j++)
    //     {
    //         printf("%d", a[j]);
    //         suma = 0.0 + a[j];
    //     }
    //     printf("%d", suma);

    //     printf("\nSum of odd no :\n");

    //     for (k = 0; k < ae; k++)
    //     {
    //         printf("%d", a[k]);
    //         sumb = 0.0 + a[k];
    //     }
    //     printf("%d", sumb);

    // return 0;
}
