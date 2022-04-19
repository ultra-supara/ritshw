#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float average;

    if (argc != 3) {
        printf("引数の個数が違います");
        exit (1);
    }

    average = (float)(atoi(argv[1]) + atoi(argv[2])) / 2;
    printf("平均 = %f\n", average);
    return 0;
}
