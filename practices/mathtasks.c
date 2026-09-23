#include <stdio.h>
#include <math.h>

int main()
{
    float x, z1, z2;
    printf("Enter x: ");
    scanf("%f", &x);

    if ((x <= -3) || (x > 3)){
        z1 = (x*x+2*x-3+(x+1)*sqrt(x*x-9))/(x*x-2*x-3+(x-1)*sqrt(x*x-9));
        z2 = sqrt((x+3)/(x-3));
        printf("z1 = %f; z2 = %f", z1, z2);
    }
    else {
        printf("x=%f is not in the domain of the function", x);
    }
    return 0;
}
