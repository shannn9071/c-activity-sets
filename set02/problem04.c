#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
    int num1, num2, gcd;
    

    num1 = input();
    num2 = input();
    

    gcd = find_gcd(num1, num2);
    
    
    output(num1, num2, gcd);
    
    return 0;
}

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}


int find_gcd(int a, int b) {
    int remainder;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}


void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is %d\n", a, b, gcd);
}
