#include <stdio.h>
#include <windows.h>

int main()
{
    system("start 1000-7.exe");

    for (int i = 1000; i > 0; i -= 7)
    {
        printf("%d\n\a", i);
        Sleep(50);
    }

    return 0;
}
