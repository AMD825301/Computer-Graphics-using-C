#include <stdio.h>
#include <graphics.h>

void bresenham(int x1, int y1, int x2, int y2)
{

    int dx, dy, p, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    p = 2 * dy - dy;

    while (x <= x2)
    {
        if (p <= 0)
        {
            putpixel(x, y, 4);
            p = p + 2 * dy;
        }
        else
        {
            putpixel(x, y, 4);
            p = p + 2 * dy - 2 * dx;
            y++;
        }
        x += 1;
        delay(30);
    }
}

int main(int argc, char const *argv[])
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");
    int a, b, c, d;
    printf("Enter the starting co-ordinates: ");
    scanf("%d %d", &a, &b);

    printf("Enter the ending co-ordinates: ");
    scanf("%d %d", &c, &d);

    bresenham(a, b, c, d);
    getch();
    return 0;
}
