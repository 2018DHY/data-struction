//
//  binarytree.c
//  Data struction
//
//  Created by HY D on 2020/4/7.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "binarytree.h"
void CreatBTree(BinaryTree *b,char str[])
{
    BinaryTreeNode* St[20];
    BinaryTreeNode*p=NULL;
    int top=-1,k=0,j=0;
    char ch;
    b->root=NULL;
    ch=str[j];
    while (ch!='\0')
    {
        switch (ch)
        {
            case 40:top++;St[top]=p;k=1;break;
            case 41:top--;break;
            case 44:k=2;break;
            default:
                p=(BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
                p->data=ch;p->LeftChild=NULL;p->RightChild=NULL;
                if(b->root==NULL)
                    b->root=p;
                else
                {
                    switch (k) {
                        case 1:St[top]->LeftChild=p;break;
                        case 2:St[top]->RightChild=p;break;
                    }
                }
        }
        j++;ch=str[j];
    }
}

void InitBinaryTree(BinaryTree * bt)
{
    bt->root=NULL;
}

Bool TreeIsEmpty(BinaryTree * bt)
{
    return ((bt->root)? FALSE:TRUE);
}

Bool getRoot(BinaryTree * bt, ElementType5 * x)
{
    if(bt-> root)
    {
        * x=bt->root->data;
        return TRUE;
    }
    else
        return  FALSE;
}

BinaryTreeNode * MakeTree(BinaryTree * bt, ElementType5 element, BinaryTreeNode * left, BinaryTreeNode * right)
{
    bt->root=(BinaryTreeNode *)malloc(sizeof(BinaryTreeNode));
    if(bt->root==NULL)
    {
        printf("Memory allocation failure!\n");
        exit(1);
    }
    InitBinaryTreeNode(bt->root, element, left, right);
    return  bt->root;
}
//先序遍历
void PreOrder(BinaryTreeNode * t)
{
    if(t)
    {
        printf("%c",t->data);
        PreOrder(t->LeftChild);
        PreOrder(t->RightChild);
    }
}
//中序遍历
void InOrder(BinaryTreeNode * t)
{
    if(t)
    {
        InOrder(t->LeftChild);
        printf("%c",t->data);
        InOrder(t->RightChild);
    }
}
//后序遍历
void PostOrder(BinaryTreeNode * t)
{
    if(t)
    {
        PostOrder(t->LeftChild);
        PostOrder(t->RightChild);
        printf("%c",t->data);
    }
}
