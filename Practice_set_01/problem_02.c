#include <stdio.h>

int main(){
    int r = 22.0;
    const double pi = 3.14;
    int height = 16.0;
    printf("Area of the circle: %f\n" , pi*r*r);
    printf("Volume of the cylinder: %.5f" , pi*r*r*height);
    return 0;
}