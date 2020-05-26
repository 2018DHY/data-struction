//
//  node.c
//  Data strunction
//
//  Created by HY D on 2020/3/6.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "node.h"
#include <stdio.h>

void InitNode(Node *N, ElementType2 item,Node *ptr)
{
    N->data=item;
    N->next=ptr;
}

void InsertAfter(Node *N, Node *p)
{
    p->next=N->next;
    N->next=p;
}
Node *DeleteAfter(Node * P)
{
    Node *ptr=P->next;
    
    if(ptr==NULL)
        return NULL;
    P->next=ptr->next;
    return ptr;
}

Node  *GetNode(ElementType2 item , Node * nextPtr)
{
    Node * newNode;
    
    newNode=(Node * )malloc(sizeof(Node));
    if (newNode==NULL)
    {
        printf("Memory allocation failure!\n");
        exit(1);
    }
    InitNode(newNode, item, nextPtr);
    return newNode;
}

void FreeNode(Node *ptr)
{
    if(!ptr)
    {
        printf("FreeNode:invalid node pointer!\n");
        return;
    }
    free(ptr);
}
