#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n],int sum);
void output(int n,int sum);
int main()
{
    int n,sum=0;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_array(n,a,sum);
    output(n,sum);
    return 0;
}
int input_array_size()
{
    int n;
    printf("Enter  the size of the array:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    printf("Enter the values of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n, int a[n],int sum)
{
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int n,int sum)
{
    printf("The sum of the array of size %d is %d\n",n,sum);
}