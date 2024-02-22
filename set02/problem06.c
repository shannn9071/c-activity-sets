#include <stdio.h>

typedef struct _triangle
{
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);

int main()
{
    Traingle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle()
{

    Traingle t;

    printf("enter the base of the traingle :");
    scanf("%f", &t.base);

    printf("enter the altitude of the traingle :");
    scanf("%f", &t.altitude);

    return t;
}

void find_area(Traingle *t)
{

    t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t)
{

    printf("the area of the traingle with base %fand altitude %f is %f", t.base, t.altitude, t.area);
}
