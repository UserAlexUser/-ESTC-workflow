#include <stdio.h>
#include "func.h"

int main()
{
    int i;
    double v1[3] = { 1, 2, 3 };
    double v2[3] = { 4, 5, 6 };
    double vsum[3], vsub[3], vdot, vcross[3];
    sum(&v1, &v2, &vsum);
    sub(&v1, &v2, &vsub);
    vdot = dot(&v1, &v2);
    cross(&v1, &v2, &vcross);
    for (i = 0; i < 3; i++)
        printf("sum = %f ", vsum[i]);
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("sub = %f ", vsub[i]);
    printf("\n");
    printf("dot = %f ", vdot);
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("cross = %f ", vcross[i]);
}