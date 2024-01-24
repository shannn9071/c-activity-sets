#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n;
    Complex result;

    n = get_n();

    Complex numbers[n];
    input_n_complex(n, numbers);

    result = add_n_complex(n, numbers);

    output(n, numbers, result);

    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of complex numbers to add: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    printf("Enter the real part of the complex number: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%f", &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = c[0];
    for (int i = 1; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) {
    printf("Sum of %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Complex Number %d: %f + %fi\n", i + 1, c[i].real, c[i].imaginary);
    }
    printf("Result: %f + %fi\n", result.real, result.imaginary);
}