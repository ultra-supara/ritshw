#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, D, result1, result2;

    printf("ax^2 + bx + c = 0 の係数を入力して下さい。\n");

    printf("a = ");          scanf("%lf", &a);
    printf("b = ");          scanf("%lf", &b);
    printf("c = ");          scanf("%lf", &c);

    D = (b*b - 4*a*c);

    if (D > 0) 
    {
        result1 = ( -b + sqrt(D) )/ (2*a);
        result2 = ( -b - sqrt(D) )/ (2*a);
        printf("result1 = %f と resutl2 = %f \n", result1, result2);
    } 
    else if (D == 0) 
    {
        result1 = ( -b - sqrt(D) )/2*a;
        printf("resutl1 = %f \n", result1);
    } 
    else 
    {
        double real, imag;
        real = -b/2*a;
        imag = sqrt(-D)/2*a;
        printf("result1 = %f+%fi, result2 = %f-%fi \n", real, imag, real, imag);
    }
        return 0;
}