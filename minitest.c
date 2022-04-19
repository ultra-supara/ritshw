#include <stdio.h>
#include <math.h>
#define PI 3.141592
double cone_surface(double r,double h){

    double x;

    x = sqrt(r * r + h * h);
    return  r * PI * (r + x);
}

int main(void){

        double r, h;

        printf("底面の半径:");
        scanf("%lf", &r);
        printf("円錐の高さ:");
        scanf("%lf", &h);

  printf("円錐の表面積は%fです。\n", cone_surface(r,h));

  return 0;
}

