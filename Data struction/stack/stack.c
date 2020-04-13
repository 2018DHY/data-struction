//
//  stack.c
//  Data struction
//
//  Created by HY D on 2020/3/9.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "stack.h"
void FreeStack (Stack *S)
{
    free(S->elements);
}

void MakeEmpty (Stack *S)
{
    S->top=-1;
}

Bool IsStackEmpty (Stack * S)
{
    return (Bool) (S->top==-1);
}

Bool IsFull (Stack *S)
{
    return (Bool) (S->top==S->MaxSize-1);
}

void InitStack (Stack *S,int sz)
{
    S->MaxSize=sz;
    S->elements=(ElementType * ) malloc(sizeof(ElementType) * S->MaxSize);
    S->top=-1;
}

int Push (Stack * S, ElementType item)
{
    if (!IsFull(S))
    {
        S->elements[++(S->top)]=item;
        return 0;
    }
    else return -1;
}

ElementType Pop (Stack * S)
{
    if (!IsStackEmpty(S))
        return S->elements[(S->top)--];
    else
    {
        printf("stack is empty!\n");
        exit(1);
    }
}

ElementType GetTop (Stack *S)
{
    if (!IsStackEmpty(S))
        return S->elements[S->top];
    else
    {
        printf("stack is empty!\n");
        exit(1);
    }
}
