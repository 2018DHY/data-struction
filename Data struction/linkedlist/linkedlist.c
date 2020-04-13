//
//  linkedlist.c
//  Data strunction
//
//  Created by HY D on 2020/3/6.
//  Copyright © 2020 HY D. All rights reserved.
//链表实现
#include "linkedlist.h"

void InitLinkedList (LinkedList *L)
{
    L->front=NULL;
    L->rear=NULL;
    L->prevPtr=NULL;
    L->currPtr=NULL;
    L->size=0;
    L->position=-1;
}

Bool IsLinkedlistEmpty(LinkedList *L)
{
    return L->size?FALSE:TRUE;
}

int NextLNode(LinkedList *L)
{
    if (L->position >= 0 && L->position < L->size)
    {
        L->position++;
        L->prevPtr=L->currPtr;
        L->currPtr=(L->currPtr)->next;
    }
    else L->position=L->size;
    return L->position;

}

int SetPosition(LinkedList *L, int pos)/*重置当前节点位置的函数*/
{
    int k;
    if (!L->size) return -1;
    if(pos<0||pos > L->size-1)
    {
        printf("Position error");
        return -1;
    }
    L->currPtr=L->front;
    L->prevPtr=NULL;
    L->position=0;
    
    for (k=0; k<pos; k++)
    {
        
        L->position++;
        L->prevPtr=L->currPtr;
        L->currPtr= (L->currPtr)->next;
    }
    return L->position;
}

void InsertAt(LinkedList *L,ElementType item)
{
    Node * newNode;
    if (!L->size)
    {
        newNode=GetNode(item, L->front);        L->front=L->rear=newNode;
        L->position=0;
    }
    else if (!L->prevPtr)
    {
        newNode=GetNode(item, L->front);
        L->front=newNode;
    }
    else
    {
        newNode=GetNode(item, L->currPtr);
        InsertAfter(L->prevPtr, newNode);
    }
    
    L->size++;
    L->currPtr=newNode;
    
}
void InserLAfter(LinkedList *L,ElementType item)
{
    Node *newNode;
    if (!L->size)
    {
        newNode=GetNode(item, NULL);
        L->front=L->rear=newNode;
        L->position=0;
    }
    else if(L->currPtr==L->rear||!L->currPtr)
    {
        newNode=GetNode(item, NULL);
        InsertAfter(L->rear, newNode);
        L->prevPtr=L->rear;
        L->rear=newNode;
        L->position=L->size;
    }
    else
    {
        newNode=GetNode(item, (L->currPtr)->next);
        InsertAfter(L->currPtr, newNode);
        L->prevPtr=L->currPtr;
        L->position++;
        
    }
    L->size++;
    L->currPtr=newNode;
}
void DeleteAt(LinkedList * L)
{
    Node * oldNode;
    if (!L->currPtr)
    {
        printf("DeleteAt:current position is invalid!\n");
        return ;
    }
    if (!L->prevPtr)
    {
        oldNode=L->front;
        L->front=(L->currPtr)->next;
    }
    else
        oldNode=DeleteAfter(L->prevPtr);
    if (oldNode==L->rear)
    {
        L->rear=L->prevPtr;
    }
    L->currPtr=oldNode->next;
    FreeNode(oldNode);
    L->size--;
}

void DeletLAfter(LinkedList *L)
{
    Node * oldNode;
    if (!L->currPtr||L->currPtr==L->rear)
    {
        printf("DeleteAftr; current position is  invalid\n");
        return ;
    }
    oldNode=DeleteAfter(L->currPtr);
    if (oldNode==L->rear)
        L->rear=L->currPtr;
    FreeNode(oldNode);
    L->size--;
}

ElementType GetData(LinkedList *L)
{
    if (!L->size||!L->currPtr)
    {
        printf("Data: current node does not exist!\n");
        exit(1);
    }
    return L->currPtr->data;
}

void SetData(LinkedList *L, ElementType item)
{
    if (!L->size||L->currPtr)
    {
        printf("Data: current node not exist!\n");
        exit(1);
    }
    L->currPtr->data=item;
}

void Clear (LinkedList *L)
{
    Node * currNode = L->front, * nextNode;
    while (currNode)
    {
        nextNode=currNode->next;
        FreeNode(currNode);
        currNode=nextNode;
    
    }
    L->front=L->rear=L->prevPtr=L->currPtr=NULL;
    L->size=0;
    L->position=-1;
}
