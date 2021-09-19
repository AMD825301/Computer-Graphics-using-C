#include <stdio.h>
#include <graphics.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    circle(200, 400, radius);
    getch();
    return 0;
}
