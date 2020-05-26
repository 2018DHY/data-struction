//
//  binarytreenode.c
//  Data struction
//
//  Created by HY D on 2020/4/7.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "binarytreenode.h"
void InitBinaryTreeNode(BinaryTreeNode * btree,ElementType5 e,BinaryTreeNode * l,BinaryTreeNode * r)
{
    btree->LeftChild=l;
    btree->RightChild=r;
    btree->data=e;
}

BinaryTreeNode * CreateBTree(ElementType5 item,BinaryTreeNode * lptr,BinaryTreeNode * rptr)
{
    BinaryTreeNode * p;
    p=(BinaryTreeNode * )malloc(sizeof(BinaryTreeNode));
    if(p==NULL)
        printf("Memory allocation failure!\n");
    else
        InitBinaryTreeNode(p, item, lptr, rptr);
    return p;
}
