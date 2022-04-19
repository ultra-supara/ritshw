#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int a,b,sum;

    if (argc != 3) {
        puts("引数の個数が違います");
        exit(1);
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    sum = a + b;
    printf("合計 = %d\n" , sum);
    return 0;
}
