#include <stdio.h>
#include <stdlib.h>

#include "bt.h"

#define START 0
#define END 50

int main() {
    BinaryTree *bt1, *bt2, *bt3;
    int start, end;

    initializeBinaryTree();
    bt1 = createBinaryTree();
    bt2 = createBinaryTree();
    bt3 = createBinaryTree();

    start = START;
    end = END;
    for (int i = start; i < end; i++ ) {
        insertInBinaryTree( bt1, i );
    }
    printf( "%s\n", toStringBinaryTree( bt1, PREORDER ));
    printf( "%s\n", toStringBinaryTree( bt1, POSTORDER ));

    for (int i = end; i > start; i-- ) {
        insertInBinaryTree( bt2, i );
    }
    printf( "%s\n", toStringBinaryTree( bt2, INORDER ));
    printf( "%s\n", toStringBinaryTree( bt2, PREORDER ));

    for (int i = start; i < end; i = i+2 ) {
        insertInBinaryTree( bt3, start + i*2 );
        insertInBinaryTree( bt3, end - i*2 );
    }
    printf( "%s\n", toStringBinaryTree( bt3, INORDER ));
    printf( "%s\n", toStringBinaryTree( bt3, POSTORDER ));

}