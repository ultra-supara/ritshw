#include <stdio.h>
#include <stdlib.h>

//構造体の宣言
typedef struct tomodachi{
    char name [32];
    int age;
    struct tomodachi *next;
}Friend;

int main(){
//最初の要素の追加
//malllocで要素の記憶エリアの確保
Friend *list_top = NULL;
list_top = (Friend*)malloc(sizeof(Friend));
strcpy (list_top->name, "Haruko");
list_top -> age = 28;
list_top -> next = NULL;

//2番目の要素の追加
Friend *wp = NULL; //作業用
wp = (Friend*)malloc(sizeof(Friend));
strcpy (wp -> name,"Akiko");
wp -> age = 18;
wp -> next = NULL;
list_top -> next = wp;

//要素1と要素2の間に要素3(name"Natsuko",age25)の追加
Friend *wp = NULL;
Friend *wq = NULL;
wq = list_top -> next;
wp = (Friend *)malloc(sizeof(Friend));
strcpy(wp->name, "Natsuko");
wp->age = 25;
wp->next = wq;
list_top->next = wp;

for (wp = fread; wp != NULL; wp = wp->next)
    printf("[%d]-->", wp->next);

printf("End\n");

return 0;
}
