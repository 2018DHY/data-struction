//
//  node.h
//  Data strunction
//
//  Created by HY D on 2020/3/6.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef node_h
#define node_h
#include <stdio.h>
#include <stdlib.h>
typedef int  ElementType;
struct node
{
    struct node *next;/*next为指向下一个节点的指针*/
    ElementType data;
};
typedef struct node Node;
void InitNode(Node *,ElementType item, Node *ptr);/*初始化单链表节点*/
void InsertAfter(Node *, Node *);/*插入一个单链表节点*/
Node * DeleteAfter(Node *);/*删除一个单链表节点*/
Node *GetNode(ElementType item, Node *ptr);/*创建一个单链表节点*/
void FreeNode(Node *);/*释放一个单链表节点*/



#endif /* node_h */
