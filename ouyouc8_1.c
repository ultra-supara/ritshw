#include <stdio.h>
#include <stdlib.h>

int main(){

    typedef struct node {
        int data;
        struct node *next;
    }NODE;

    //キーボードから整数を変数xによみこむ
    int x;
    NODE *p;
    NODE *head = NULL;

    while(1) {
        printf("data =");
        scanf("%d", &x);
        if(x == -1)
            break;

        //NODE型のノード1個分の記憶場所を確保そのアドレスをNODE型ポインタとしてキャストして変数pにセット
        p = (NODE *)malloc(sizeof(NODE));
        //生成したノードのnext部にheadのなかみを入れる
        p->next = head;
        //読み込んだ整数を生成したのーどのdata部に入れている
        p->data = x;
        //ポインタ変数pにheadの内容を入れている
        head = p;
    }
    p = head;
    while(p) {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("End\n");
    return 0;
}
