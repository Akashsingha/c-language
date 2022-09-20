#include <stdio.h>

// 0,1,1,2,3,5,8,13,21,34
int fun1()
{
    return 0;
}
int fun2()
{
    return 0;
}


int main()
{
    int position;
    printf("Which number should you want in febanachi series Enter the position:\n");
    scanf("%d", &position);
    
    int iterative;
    iterative = fun1();
    printf("In iterative approch %d\n", iterative);
    int reccursive;
    reccursive = fun2();
        printf("In recursive approch %d\n", reccursive);
}
