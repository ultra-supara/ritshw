#include <stdio.h>
//stackの大きさをマクロで定義する
#define N 10
//構造体の定義、データ型に名前をつける--------------------------------------------------------
typedef int data_t;
//スタックに使う配列の宣言。この際、配列をグローバル変数として宣言する
data_t stack[N];
//スタックの代わりにインデックスの要素数を保持する
int size;
//スタックを初期化するためinit関数を用いる
void init(void){
    size = 0;
}
//データを追加するpush!!!!--------------------------------------------------------------------
void push(data_t x){
    if (size >= N) {
        printf("stack overflow\n");
        return;
    }
    stack[size] = x;
    size++;
}
//dataを取り出すpop!!!-------------------------------------------------------------------------------
void pop(data_t *x){
    if (size <= 0) {
        printf("stack underflow\n");
        return;
    }
    *x = stack[size - 1];
    size--;
}
//ここからmain関数で一気に引き出す-----------------------------------------------------------------
int main(void){
    // スタックの初期化
    init();
    
    // スタックに値を追加
    push(10);
    push(20);

    // スタックから値を取り出す
    int x;
    pop(&x);
    printf("%d\n", x);
    pop(&x);
    printf("%d\n", x);
    }

    /*2290200052-0 sada atsushi 情報処理演習
実行結果
20
10*/
