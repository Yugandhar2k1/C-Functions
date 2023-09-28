#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a=12, b = 30;
    int sum = add(a,b);
    printf("%d", sum);
    return 0;
}