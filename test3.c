//キューの容量が小さくなりオーバーフローになるコード例
#include <stdio.h>
#define N 4
typedef int data_t;
data_t queue[N];
int head;
int tail;
void init(void){
    head = 0;
    tail = 0;
}
void enqueue(data_t x){
    if (tail >= N) {
        printf("queue overflow\n");
        return;
    }
    queue[tail] = x;
    tail++;
}
void dequeue(data_t *x){
    if (head == tail) {
        printf("queue underflow\n");
        return;
    }
    *x = queue[head];
    head++;
}
int main(void){
    init();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    int x;
    dequeue(&x);
    printf("%d\n", x);
    dequeue(&x);
    printf("%d\n", x);
    enqueue(40);
    enqueue(50); //=> オーバーフロー
}
