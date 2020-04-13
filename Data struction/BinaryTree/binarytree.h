//
//  binarytree.h
//  Data struction
//
//  Created by HY D on 2020/4/7.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef binarytree_h
#define binarytree_h

#include <stdio.h>
#include "binarytreenode.h"
#include "ordinary.h"
struct binaryTree
{
    BinaryTreeNode * root;
};
typedef struct binaryTree BinaryTree;
void InitBinaryTree(BinaryTree * bt);
void CreatBTree(BinaryTree *b,char str[]);
Bool TreeIsEmpty(BinaryTree * bt);
Bool getRoot(BinaryTree * bt, ElementType * x);
BinaryTreeNode * MakeTree(BinaryTree * bt, ElementType element, BinaryTreeNode * left, BinaryTreeNode * right);
void PreOrder(BinaryTreeNode * t);
void InOrder(BinaryTreeNode * t);
void PostOrder(BinaryTreeNode * t);

#endif /* binarytree_h */
