#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("Complex A: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Complex B: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
    Complex complexA, complexB, result;

    printf("Enter values for Complex A:\n");
    complexA = input_complex();

    printf("Enter values for Complex B:\n");
    complexB = input_complex();

    result = add_complex(complexA, complexB);

    printf("Result:\n");
    output(complexA, complexB, result);

    return 0;
}
