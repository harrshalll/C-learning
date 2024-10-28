#include<stdio.h>
int main(){
   float a = 2.6 , b = 8.6 , c;
   printf("a is %f and b is %f\n", a,b);
   c = a + b;
   printf("a + b is %f\n", c);
   c = a - b;
   printf("a - b is %f\n",c);
   c = a * b;
   printf("a * b is %f\n",c);
   c = a / b;
   printf("a / b is %.5f\n",c);
   char h = 'H';
   printf("h is H\n", h);

    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu byte\n", sizeof(char));
    return 0;
}