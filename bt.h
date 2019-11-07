#ifndef BINARYTREE
#define BINARYTREE

#define MAXPRINTBUFFER 500

typedef enum {
    PREORDER,
    INORDER,
    POSTORDER
    } TreeOrder;

typedef struct BTNode {
    struct BTNode * left;
    struct BTNode * right;
    int data;
} BTNode;

typedef struct BinaryTree {
    BTNode * root;
    int size;
} BinaryTree;

extern BinaryTree* createBinaryTree();
extern void insertInBinaryTree( BinaryTree*, int );
extern void insertHelper(BTNode*, int);
extern char* toStringBinaryTree( BinaryTree*, TreeOrder );
extern void initializeBinaryTree();

#endif
