#include <stdio.h>

int main(){

typedef struct club{
    int bangou;
    char namae[20];
    char seibetu;
    int nenrei;
    float shintyou;
    float taijyu;
} GYM;

    int i = 0; //変数の初期化

    GYM fitness[] = {
        {1401,  "Yamada", 'm', 40, 170.2, 67.9},
        {1402,  "Suzuki", 'f', 22, 152.4, 47.9},
        {1403,  "Nakano", 'f', 30, 160.5, 50.2},
        {1404,  "Morita", 'm', 52, 168.3, 72.4}
    };

    struct club *p;
    p = fitness;

    for (i=0 ; i<4 ; i++) {
    printf("%6d %14s %3c %4d %6.2f %6.2f"
    ,(p+i)->bangou, (p+i)->namae, (p+i)->seibetu,
    (p+i)->nenrei, (p+i)->shintyou, (p+i)->taijyu);

    printf("\n");
    }

    //変数宣言と初期化
    double average_shintyou = 0.0;
    double average_taijyu = 0.0;
    double max_taijyu = 0.0;
    double min_shintyou = 0.0;
    double average_nenrei = 0.0;

    int z,y;

    for (i = 0; i < 4; i++){
        average_nenrei = fitness[i].nenrei + average_nenrei;
        average_shintyou = fitness[i].shintyou + average_shintyou;
        average_taijyu = fitness[i].taijyu + average_taijyu;

        if (max_taijyu < fitness[i].taijyu) {
            max_taijyu = fitness[i].taijyu;
            z = fitness[i].bangou;
        }
        if (min_shintyou < fitness[i].shintyou){
            min_shintyou = fitness[i].shintyou;
            y = fitness[i].bangou;
        }
    }

    average_nenrei = average_nenrei / 4;
    average_shintyou = average_shintyou / 4;
    average_taijyu = average_taijyu / 4;

    printf("平均年齢 = %.3f\n", average_nenrei);
    printf("平均身長 = %.3f\n", average_shintyou);
    printf("平均体重 = %.3f\n", average_taijyu);
    printf("最大体重 = %.3f, 会員番号 = %d\n", max_taijyu, z);
    printf("最小身長 = %.3f, 会員番号 = %d\n", min_shintyou, y);

    return 0;
}
