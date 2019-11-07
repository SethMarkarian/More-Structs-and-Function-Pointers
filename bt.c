#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bt.h"

BinaryTree* createBinaryTree() {
    BinaryTree * bt;
    bt = (struct BinaryTree *) malloc(sizeof(BinaryTree))
    bt->root = NULL;
    bt->size = 0;
    return bt;
}

void insertInBinaryTree( BinaryTree* bt, int x ) {
    insertHelper(bt->root, x);
    bt->size++;
}

void insertHelper(BTNode * n, int data) {
    if(n == NULL) {
        n = (struct BTNode *) malloc(sizeof(BTNode));
        n->data = data;
        // n->left = NULL;
        // n->right = NULL;
    }
    else {
        if(data <= n->data) {
            n->left = insertHelper(n->left, data);
        }
        else {
            node->right = insertHelper(n->right, data);
    }
}

char* toStringBinaryTree( BinaryTree* bt, TreeOrder order ) {
    if ( bt->root != NULL ) {
        char* printbuf = (char*)malloc( bt->size*3 );
        // call traversals with printbuf

        return( printbuf );
    }
    else
        return( (char*)NULL );
}


void BinaryTreeInOrder( BTNode* bt, char* p ) {
    if(bt != NULL) {
        BinaryTreeInOrder(bt->left, p);
        //Print
        BinaryTreeInOrder(bt->right, p);
    }
}

void BinaryTreePreOrder( BTNode* bt, char* p ) {
    if(bt != NULL) {
        //print
        BinaryTreePreOrder(bt->left, p);
        BinaryTreePreOrder(bt->right, p);
    }
}

void BinaryTreePostOrder( BTNode* bt, char* p ) {
    if(bt != NULL) {
        BinaryTreePostOrder(bt->left, p);
        BinaryTreePostOrder(bt->right, p);
        //print
    }
}

void initializeBinaryTree() {
    ftable[PREORDER] = BinaryTreePreOrder;
    ftable[INORDER] = BinaryTreeInOrder;
    ftable[POSTORDER] = BinaryTreePostOrder;
}
