#include <stdio.h>
int main()
{
 int a = 10, b = 4, C;
 printf("a is %d and b is %d\n", a, b);
 C = a + b; 
 printf("a + b is %d \n", C);
 C = a - b; 
 printf("a - b is %d \n", C);
 C = a * b; 
 printf("a * b is %d\n", C);
 C = a / b; 
 printf("a / b is %d\n", C);
 C = a % b; 
 printf("a %% b is %d\n", C);
 return 0;
}