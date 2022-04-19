#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value; //ノードの値
    struct node *left; /* 左の子ノードへのポインタ */
    struct node *right; //右
} BtreeNode;

/* 木のねを指すポインタtree_rootでこれはグローバルへんすう */
BtreeNode *tree_root = NULL;
/* 新しいノードのメモリを確保してノードの値をセットする関数
戻りの値は確保したノードのアドレス */
BtreeNode *create_new_node(int num){
    BtreeNode *tree_poin;

    tree_poin = (BtreeNode *)malloc(sizeof(BtreeNode));

    if(tree_poin == NULL) exit(0);
    tree_poin->value = num;
    tree_poin->left = NULL;
    tree_poin->right = NULL;
    return (tree_poin);

    /* ノードツリーに追加してツリーを成長させていく関数
    第一引数には追加するノードの値、第二引数にはツリーの根っこを指すポインタで戻り値はない
    最初はツリー全体の根を処理が進んでくると着目する部分のツリーの根をみる*/
    void insert_tree (int num, BtreeNode *node) {
        /* 根がからの時今回追加するものが全体の根になる */
        if (node == NULL){
            tree_root = create_new_node(num);
            return;
        }
        /* numが現在のnodeの値より小さい場合 */
        if (num < node->value) {
            /* 左側がからではない(先客がいる)場合は再帰呼び出しをする */
            if(node->left != NULL)
                insert_tree(num,node->left);
            else
                node->left = create_new_node(num);

        }
        /* numが現在のノードの値と等しいか大きい場合 */
    }
}
