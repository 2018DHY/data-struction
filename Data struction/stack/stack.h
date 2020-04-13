//
//  stack.h
//  Data struction
//
//  Created by HY D on 2020/3/9.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef stack_h
#define stack_h
#include <stdio.h>
#include <stdlib.h>
#include "ordinary.h"
typedef int ElementType;


struct stack
{
    int top;
    ElementType * elements;
    int MaxSize;
};
typedef struct stack Stack;

void InitStack(Stack *,int sz);
void FreeStack(Stack *);
int Push(Stack * ,ElementType);
ElementType Pop(Stack *);
ElementType GetTop(Stack *);
void MakeEmpty(Stack *);
Bool IsStackEmpty(Stack * S);
Bool IsFull(Stack *S);
#endif /* stack_h */
