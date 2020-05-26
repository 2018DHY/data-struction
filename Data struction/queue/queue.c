//
//  queue.c
//  Data struction
//
//  Created by HY D on 2020/4/16.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "queue.h"
void InitQueue (Queue *Q,int sz)
{
    Q->MaxSize=sz;
    Q->elements=(ElementType4 *) malloc(sizeof(ElementType4) * Q->MaxSize);
    Q->front=Q->rear=0;
}

void FreeQueue(Queue * Q)
{
    free(Q->elements);
}

void MakequeueEmpty(Queue * Q)
{
    Q->front=Q->rear=0;
}

Bool IsqueueEmpty(Queue * Q)
{
    return (Bool)(Q->front==Q->rear);
}

Bool IsqueueFull(Queue * Q)
{
    return (Bool)(Q->front==(Q->rear+1)%(Q->MaxSize));
}

int Length(Queue * Q)
{
    return (Q->rear-Q->front+Q->MaxSize)%(Q->MaxSize);
}

int EnQueue(Queue * Q, ElementType4 item)
{
    if(IsqueueFull(Q))
    {
        Q->elements[Q->rear]=item;
        Q->rear=(Q->rear+1)%(Q->MaxSize);
        return 0;
    }
    else
        return -1;
}

ElementType4 DeQueue(Queue *Q)
{
    ElementType4 item;
    if(!IsqueueEmpty(Q))
    {
        item=Q->elements[Q->front];
        Q->front=(Q->front+1)%(Q->MaxSize);
        return item;
    }
    else
    {
        printf("error!");
        exit(1);
    }
}

ElementType4 GetFront(Queue * Q)
{
    if(!IsqueueEmpty(Q))
    {
        return Q->elements[Q->front];
    }
    else
    {
        printf("error!");
        exit(1);
    }
}
