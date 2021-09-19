#include <stdio.h>
#include <graphics.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");

    for (int i = 0; i <= 5; i++)
    {
        setbkcolor(i);
        printf("Background color is set to %d\n", i);
        delay(1000);
        cleardevice();
    }

    getch();
    return 0;
}
