//
//  binarytreenode.h
//  Data struction
//
//  Created by HY D on 2020/4/7.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef binarytreenode_h
#define binarytreenode_h

#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
struct binaryTreeNode
{
    ElementType data;
    struct binaryTreeNode * LeftChild, * RightChild;
};
typedef struct binaryTreeNode BinaryTreeNode;

void InitBinaryTreeNode(BinaryTreeNode * btree,ElementType e,BinaryTreeNode * l,BinaryTreeNode * r);
BinaryTreeNode * CreateBTree(ElementType item,BinaryTreeNode * lptr,BinaryTreeNode * rptr);



#endif /* binarytreenode_h */
