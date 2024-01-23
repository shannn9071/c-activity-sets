#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);


int input(){
    int x;
    printf("enter a value :");
    scanf("%d",&x);
    return x;
}

int add(int a, int b) {
     int sum = a+b;
     return sum;
}

void output(int a, int b, int sum) {
    printf("the sum of two numbers is : %d ",sum);
}
 int main() {
    int a,b,sum;
   a = input();
   b = input();
    sum = add(a,b);
   output(a,b,sum);
    
    return 0;
 }