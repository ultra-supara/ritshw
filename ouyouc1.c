#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum janken {
    Gu = 0, Choki = 2, Pa = 5
} JPON;

int saikoro(void){
    int sai;                        //戻り値1-6の整数
    srand((unsigned)time(NULL));    //現在時刻の情報で初期化
    sai = rand() % 6 + 1;
    return sai;
}

JPON sysjan(int sainome){
    int pon;
    switch(sainome) {

        //目が1,2の場合
        case 1 :
            pon = 0;
            break;
        case 2 :
            pon = 0;
            break;

        //目が3,4の場合
        case 3 :
            pon = 2;
            break;
        case 4 :
            pon = 2;
            break;

        //目が5,6の場合
        case 5 :
            pon = 5;
            break;
        case 6 :
            pon = 5;
            break;
        }
        return ((JPON)sainome);
}

void watashinoken(JPON ken) {
    switch(ken) {
        case 0 :{
            printf("私はぐーを出しました\n");
            break;
        }
        case 2 :{
            printf("私はチョキを出しました\n");
            break;
        }
        case 5 :{
            printf("私はパーを出しました\n");
            break;
        }
    }
}

void anatanoken (JPON ken){
    switch (ken){
        case 0:{
            printf("あなたはぐーを出しました\n");
            break;
        }
        case 2:{
            printf("あなたはちょきを出しました\n");
            break;
        }
        case 5:{
            printf("あなたはぱーを出しました\n");
            break;
        }
        default:{
            break;
        }
    }
}

/* コンピュータの拳と挑戦者の拳を比較して結果を返す関数shoubu
引数; 挑戦者の拳kenin,コンピュータの拳kenout 型はJPON
勝負結果を整数型変数shoubukekkaにセットしてreturnする*/

int shoubu(JPON kenin,JPON kenout) {
    int shoubukekka = 1;
    if (kenout == kenin)
        shoubukekka = 0;
    else
        switch (kenin) {
    //グーを入力した場合の判定
            case 0: { //ぐーを入力
                if (kenout == 5)
                    shoubukekka = -1;
                break;
            }
            case 2: { //ちょきを入力
                if (kenout == 0)
                    shoubukekka = -1;
                break;
            }
            case 5: { //パーを入力
                if (kenout == 2)
                    shoubukekka = -1;
                break;
            }
    }
    return shoubukekka;
}

/*  勝負結果を表示する関数kekka
引数が-1のとき『あなたの負けです』と表示する
引数が+1のとき『あなたの勝ちです』と表示する
引数が0のとき『あいこです』と表示する
関数の戻り値なし*/

void kekka(int shoubukekka){
    if (shoubukekka == -1)
        printf("あなたの負けです\n");
    else if (shoubukekka == 1)
        printf("あなたの勝ちです\n");
    else if (shoubukekka == 0)
        printf("あいこです\n");
    else
        printf("引数のエラーです\n");
}
/* ここからがmain関数...... */

int main(){
    JPON choken;     //挑戦者が出した拳
    JPON sysken;     //コンピュータが出した拳
    int ken_buf;
    int sai;         //サイコロの目
    int shoubukekka; // 挑戦者から見た結果:-1=負け、0=あいこ、+1=勝ち

    do{
        printf("ジャンケンをしましょう\n");
        printf("ぐーは0 ちょきは2 ぱーは5を入れます\n");
        printf("じゃんけんぽん！はいどうぞ: \a");
        scanf("%d", &ken_buf);
        choken = (JPON)ken_buf;
        if ((choken != Gu) && (choken != Choki)&& (choken != Pa))
            printf("@@@@正しく入れてください！@@@@\n");
    } while (!(choken == Gu || choken == Choki || choken == Pa));

    /* コンピュータがジャンケンを出す */
    sai = saikoro();           //サイコロを振って1-6の乱数をだす
    sysken = sysjan(sai);      //サイコロの目に応じたコンピュータ拳を出す

    /* choken(挑戦者の拳)とsysken(コンピュータが出した拳)を比較する */
    shoubukekka = shoubu(choken, sysken);

    /* 勝負結果を比較する */
    printf("\a");
    anatanoken(choken);
    watashinoken(sysken);
    kekka(shoubukekka);
    printf("終わります。お疲れ様でした。\n\n");
    return 0;
}
