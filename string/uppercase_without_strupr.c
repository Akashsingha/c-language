// upper case without strupr()
#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter a string in lowercase:\n");
    gets(name);

    for (int i = 0; name[i]; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
            name[i] = name[i] - 32;
    }

    printf("%s", name);

    return 0;
}