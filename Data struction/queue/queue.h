//
//  queue.h
//  Data struction
//
//  Created by HY D on 2020/4/16.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include "ordinary.h"
#include <stdlib.h>
typedef int ElementType4;
struct queue
{
    int rear,front;
    ElementType4 * elements;
    int MaxSize;
};
typedef struct queue Queue;
void InitQueue (Queue *,int);//创建队列空间，生成一个空队列
void FreeQueue(Queue *);//队列空间释放
void MakeEmpty(Queue *);//队列置空
Bool IsqueueEmpty(Queue *);//队列是否为空
Bool IsqueueFull(Queue *);//队列是否为满
int Length(Queue *);//求队列的元素个数
int EnQueue(Queue *,ElementType4);//若队列未满，则插入返回0，否则返回-1；
ElementType4 DeQueue(Queue *);//若队列非空，则出队，返回队头的值，否则报错
ElementType4 GetFront(Queue *);//若队列非空，则返回队头元素的值，否则报错
#endif /* queue_h */
