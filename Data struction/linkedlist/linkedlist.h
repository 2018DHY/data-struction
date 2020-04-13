//
//  linkedlist.h
//  Data strunction
//
//  Created by HY D on 2020/3/6.
//  Copyright © 2020 HY D. All rights reserved.
//链表声明

#ifndef linkedlist_h
#define linkedlist_h
#include "node.h"
#include "ordinary.h"
struct linkedList
{
    Node *front, *rear;
    Node *prevPtr, *currPtr;
    int size;
    int position;
};
typedef struct linkedList LinkedList;
Node *GetNode(ElementType item, Node *ptr);
void FreeNode (Node *p);
void InitLinkedList(LinkedList *);
Bool IsLinkedlistEmpty(LinkedList *);
int NextLNode(LinkedList *);
int SetPositoon(LinkedList *, int pos);
void InsertAt(LinkedList *, ElementType item);
void InsertLAfter(LinkedList *,ElementType item);
void DeleteAt (LinkedList *);
void DeleteLAfter(LinkedList *);
ElementType GetData(LinkedList *);
void SetData(LinkedList *,ElementType item);
void Clear(LinkedList *);



#endif /* linkedlist_h */
