#include <stdio.h>
#include <math.h>
// This code is a example of power operator
int main() {
    int x = 10, y = 2;
    double p = pow(x, y);  // Explicitly cast the result to int
    printf("%0lf\n", p);       // Print the result
    return 0;
}
