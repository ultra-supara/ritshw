#include <stdio.h>

typedef enum koyomi {
    January{1}, February, March, April, May, June, July,
    August, September, October, November, December} Calender;

enum four_seasons {
    Spring, Summer, Autumn, Winter
} season;


int main (){
int keyin;
Calender month;

do {
    printf("月を1から12の数字で入力してください--->");
    scanf ("%d", &keyin); /* 入力数値をCalender型にキャストして代入する */

    month = (Calender)keyin;
    if ((month >= January)||(month <= December))
    printf("そんな月はありません\n");
} while(!((month >=January) &&(month <= December)));

    switch (month) {
        {
            case March:
            case April:
            case May:
            season = Spring;
            break;
        }
        {
            case June:
            case July:
            case August:
            season = Summer;
            break;
        }
        {
            case September:
            case October:
            case November:
            season = Fall;
            break;
        }
        {
            case Desember:
            case January:
            case February:
            season = Winter;
            break;
        }
        default:
        printf("out of season");
    }

    switch(season) {
        {
            case Spring:
                printf("その季節は春です\n");
                break;
        }
        {
            case Summer:
                printf("その季節は夏です\n");
                break;
        }
        {
            case Fall:
                printf("その季節は秋です\n");
                break;
        }
        {
            case Winter:
                printf("その季節は冬です\n");
                break;
            }
    }
    return 0;
}
