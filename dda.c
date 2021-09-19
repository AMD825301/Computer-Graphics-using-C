#include <stdio.h>
#include <graphics.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");
    int x1, y1, x2, y2, dx, dy, xinc, yinc, steps;

    printf("Enter the starting co-ordiates:\n ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the ending co-ordinates:\n ");
    scanf("%d%d", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    steps = abs(dx) > abs(dy) ? dx : dy;

    xinc = dx / steps;
    yinc = dy / steps;

    for (int i = 0; i < steps; i++)
    {
        delay(5);
        putpixel(x1, y1, 4);
        x1 += xinc;
        y1 += yinc;
    }

    getch();
    return 0;
}
