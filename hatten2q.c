#include <stdio.h>
#define queue_size 100

int qup = -1;
int count = 0;

typedef struct{
    int idno;
    int data;
}queue_t;

queue_t queue[queue_size];

int enqueue(int id, int dt) {
    if(qup > (queue_size - 1)) {
        return -1;
    }
    qup++;
    queue[qup].idno = id;
    queue[qup].data = dt;
    
    return 0;
}
int dequeue(int *no, int *dt) {
    if(qup < 0) {
        return -1;
    }   
    qup = count;
    *no = queue[qup].idno;
    *dt = queue[qup].data;
    count++;

    return 0;
}

int main(void) {
    int n, d;
    int i = 1;

    enqueue(0, 0);
    enqueue(1, 1);
    enqueue(2, 2);

    for(; i <= 3; i++) {
        dequeue(&n, &d);
        printf("no : %d, data : %d\n", n, d);
    }  
    return 0;
}