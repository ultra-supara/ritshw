#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    int X, Y, Z, D;
    double im, ans1, ans2;

    printf("a:");
    scanf("%d", &X);
    printf("b:");
    scanf("%d", &Y);
    printf("c:");
    scanf("%d", &Z);


    D = Y * Y - 4 * X * Z;

    if (D > 0)
    {
        printf("r\n");
        printf("%f\n", ans1 = (-Y + sqrt(D)) / (2 * X));
        printf("%f\n", ans2 = (-Y - sqrt(D)) / (2 * X));
    }

    else if (D == 0)
    {
        printf("d\n");
        printf("%f\n", ans1 = -Y / (2 * X));
    }

    else
    {
        printf("i\n");
        im = sqrt(abs(D));
        printf("%d + %f i / %d\n", -Y, im, 2 * X);
        printf("%d - %f i / %d\n", -Y, im, 2 * X);
    }

    printf("%d, %d, %d", X, Y, Z);

}

