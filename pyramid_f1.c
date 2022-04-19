#include <stdio.h>
#include <stdlib.h>

int main () {

    char *extractionfile = "pyramid_f1.txt";
    FILE *fp;
    fp = fopen(extractionfile, "w");
    if(fp == NULL) {
        printf("File open error\n");
        exit(1);
    }

    int i; //段番号
    int h; //段数
    int j; //

    puts("段数を入力してください");
    printf("段数=");
    scanf("%d", &h);

    printf("\n");

    for (i=1; i<=h; i++) {
        for(j=0; j<i-1; j++) fputc(' ',fp);
        for(j=1; j<=2*h-(2*i-1); j++) fprintf(fp, "%d", i%10);
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}
