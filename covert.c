#include <stdio.h>

int main()
{
    int option, _1, _2, _3, _4, _5;
    float ans1, ans2, ans3, ans4, ans5;
    while (1)
    {
        printf("\n\n\nEnter a Number to perform a task:\n\n");
        printf("1. Kilometer to Mile\n");
        printf("2. inces to feet\n");
        printf("3. Cm to inches\n");
        printf("4. Pound to Kilogram\n");
        printf("5. inces to Meter\n");
        printf("   Enter 0 to exit\n");
   

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter kilometer:\t");
            scanf("%d", &_1);
            ans1 = _1 * 0.621371;
            printf(" %d kilometer is %f Mile", _1, ans1);
            break;
        case 2:
            printf("Enter inches:\t");
            scanf("%d", &_1);
            ans1 = _1 / 12;
            printf(" %d inces is %f feet", _1, ans1);
            break;
        case 3:
            printf("Enter Centimeter:\t");
            scanf("%d", &_1);
            ans1 = _1 * 0.393701;
            printf(" %d Centimeter is %f Inches", _1, ans1);
            break;
        case 4:
            printf("Enter Pound:\t");
            scanf("%d", &_1);
            ans1 = _1 / 2.2046;
            printf(" %d Pound is %f Kilogram", _1, ans1);
            break;
        case 5:
            printf("Enter Inches:\t");
            scanf("%d", &_1);
            ans1 = _1 * 0.621371;
            printf(" %d Inches is %f Meter", _1, ans1);
            break;
        case 0:
            goto end;
        default:
            break;
        }
    }
    end:
    return 0;
}
