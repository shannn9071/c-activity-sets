#include<stdio.h>
#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main() {
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle() {
    Triangle t;
    printf("Enter the base length of the triangle: ");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);
    return t;
}

void find_area(Triangle *t) {
    t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t) {
    printf("Area of the triangle with base %f and altitude %f is %f\n", t.base, t.altitude, t.area);
}

