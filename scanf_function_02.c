#include <stdio.h>

int main(){
    float a , b;
    printf("enter a :");
    scanf("%f", &a);

    printf("enter b :");
    scanf("%f", &b);

    float c = a+b, d = a-b, e = a*b, f = a/b;
    printf("value of c : %f\n", c);
    printf("value of d:%f\n", d);
    printf("value of e :%f\n", e);
    printf("value of f: %f" ,f);


    return 0;
}