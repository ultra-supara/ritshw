#include <stdio.h>
#include <stdlib.h>

//与えられた整数xの文字などに関しての要件とその入力-----------------------------------------------------
void input(int *x){
    char str[1000];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", x);
}
//条件a:偶奇いずれであるか否かを判定する箇所。
//整数なのでintでいれ、偶数であれば1を奇数であれば0を返す------------------------------------------------
int check_oe(int *x){
    int flag;
    if (*x % 2 == 0){
        flag = 1;
        } else{
        flag = 0;
        }
    return flag;
}
/*  条件b:素数であるか否か,作成した関数のcheck_pのpはplainのp
素数であるためには整数である必要があるのでint型でいれてやる。唯一の偶素数である2の例外処理を忘れない。-----------*/
int check_p(int *x){
    int flag_2;
    int i = 2;
    while (i > 0){
        if ((*x % i) == 0 && i != *x){
            flag_2 = 1;
            return flag_2;
            }
        else if ((*x / i) == 1){
            flag_2 = 0;
            return flag_2;
            }
         i += 1;
    }  
    return -1;
}
/* 条件c:2の冪乗であるか否か(x=2^nを満たす整数nが存在するかどうか) ------------------------------------*/
int check_sqr(int *x){
    int n = 1;
    int flag_3;
    while (n > 0){
        if (n * n == *x){
            return n;
        }else{
            flag_3 = 0;
        }

        n += 1;
    return flag_3;
}

/* 上で与えた0と1のflagについてa,b,cそれぞれの条件(2つあるのでif,else ifで分岐)を表示する関数の表記をする */
void check(int *flag, int *flag_2, int *flag_3, int *x){
    if (*flag == 1){
        printf("%dは偶数\n", *x);
        }
    else if (*flag == 0){
        printf("%dは奇数\n", *x);
        }

    if (*flag_2 == 1){
        printf("%dは素数ではありません\n", *x);
        }
    else if (*flag_2 == 0){
        printf("%dは素数\n", *x);
        }
    if (*flag_3 != 0){
        printf("%dは%dの平方根", *flag_3, *x); 
        }    
    }
}

//main関数で上の条件を順番に一気に引き出す----------------------------------------------------------
int main(){
    int x;
    input(&x);

    int flag = check_oe(&x);
    int flag_2 = check_p(&x);
    int flag_3 = check_sqr(&x);

    check(&flag, &flag_2, &flag_3, &x);
}

/* 22902000520 sada atsushi 情報処理演習

実行結果
4　　＜ー入力値
4は偶数です
4は素数ではありません
2は4の平方根です
*/