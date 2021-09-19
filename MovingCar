#include <stdio.h>
#include <graphics.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");

    for (int x = 0; x <= 420; x+=10)
    {
        cleardevice();
        rectangle(50+x, 100, 150+x, 200);
        rectangle(150+x, 150, 200+x, 200);
        circle(75+x, 210, 10);
        circle(175+x, 210, 10);
        delay(100);
    }
    getch();
    return 0;
}
