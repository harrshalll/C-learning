#include<stdio.h>
int main()
{
    int a = 50 , b = 42 ,c;
    printf("a is %d and b is %d \n" , a,b);
    c = a + b;
    printf("a + b is %d \n", c);
    c = a - b;
    printf("a - b is %d \n", c);
    c = a * b;
    printf("a * b is %d \n" ,c);
    c = a / b;
    printf("a / b is %d \n", c);
    c = a%b;
    printf("a % b is %d \n", c);
    return 0;
}