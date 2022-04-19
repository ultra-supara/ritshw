#include <stdio.h>
#define N 4

//構造体の定義------------------------------------------------------------------------------------

typedef int data_t;
data_t queue[N];
int head;
int tail;

//スタックを初期化するためinit関数を用いる今回indexは2つ------------------------------------------------
void init(void)
{
    head = 0;
    tail = 0;
}
//enqueueはデータを追加する操作
void enqueue(data_t x)
{
    if (head == (tail + 1) % N) {
        printf("queue overflow\n");
        return;
    }
    //tail変数の値がN以上のときはそれ以上データを追加できないのでqueue overflowと出力してreturnで処理を終了
    queue[tail] = x;
    tail = (tail + 1) % N;
}
//headとtailが等しいときはそれ以上データを取り出せないのでqueue underflowと出力してreturnで処理を終了
//キューからデータを取り出すdequeue関数
void dequeue(data_t *x){
    if (head == tail) {
        printf("queue underflow\n");
        return;
    }
    *x = queue[head];
    head = (head + 1) % N;
}

//ここからmain関数で一気に引き出す---------------------------------------------------------------------
int main(void){

    // キューの初期化
    init();

    // キューに値を追加
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // キューから値を取り出す
    int x;
    dequeue(&x);
    printf("%d\n", x);
    dequeue(&x);
    printf("%d\n", x);

    // キューに値を追加
    enqueue(40);
    enqueue(50);
}
/* 2290200052-0 sada atsushi 情報処理演習
実行結果
10
20 */