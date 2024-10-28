#include <stdio.h>
#include<math.h>

/*Operator precedence = *,/,% then +, - then =. If problem have same precedence then associativity rule will be apply
i.e from left to right kramanusar operate karnar*/
int main(){
    int x = 4 + 9 * 10;
    printf("value of x is %d\n" , x);
    int a = 4 * 3 / 6 * 2;
    printf("value of a is %d\n", a);
    int p = 5*2-2*3;
    printf("value of p is %d\n" ,p);
    int m = 5*(2/2)*3;
    printf("value of m is %d\n", m);
    int z = 9*2/3+5;
    printf("value of z is %d\n", z);
    return 0;
}