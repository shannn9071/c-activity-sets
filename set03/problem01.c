#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main() {
    float x1, y1, x2, y2, distance;

    input(&x1, &y1, &x2, &y2);
    distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);

    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("Distance between (%.4f, %.4f) and (%.4f, %.4f) is %.4f\n", x1, y1, x2, y2, distance);
}
