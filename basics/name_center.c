#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    int x = 40, y = 12;
    char ch;
    gotoxy(x, y);
    printf("Akash");
    while (1)
    {
        ch = getch();
        switch (ch)
        {
        case 75:
            x--;
            break; // left
        case 77:
            x++;
            break; // right
        case 72:
            y--;
            break; // up
        case 80:
            y++;
            break; // down
        case 27:
            exit(0); // exit
        default:
            break;
        }
        system("cls");
        gotoxy(x, y);
        printf("Akash");
    }

    return 0;
}