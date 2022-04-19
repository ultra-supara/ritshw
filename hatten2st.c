#include <stdio.h>
#define stack_max 100

int stp = -1;

typedef struct{
    int idno;
    int data;
}stack_t;

stack_t stack[stack_max];

int push(int id, int dt) {
    if(stp > (stack_max - 1)) {
        return -1;
    }
    stp++;
    stack[stp].idno = id;
    stack[stp].data = dt;

    return 0;
} 
int pop(int *no, int *dt) {
    if(stp < 0) {
        return -1;
    }
    *no = stack[stp].idno;
    *dt = stack[stp].data;
    stp--;

    return 0;
}
int main(void) {
    int i, c, n, d;
    char str[1000];
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &c);

    if(c > 3) {
        printf("error\n");
        return -1;
    }
    push(0, 0);
    push(1, 1);
    push(2, 2);

    for(i = 1; i <= c; i++) {
        pop(&n, &d);
        printf("no : %d, data : %d\n", n, d);
    }
　　 return 0;
}