#include <stdio.h>
#include <windows.h>

int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d", stime.wDay, stime.wMonth, stime.wYear);
    return 0;
}