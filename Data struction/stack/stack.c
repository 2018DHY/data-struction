//
//  stack.c
//  Data struction
//
//  Created by HY D on 2020/3/9.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "stack.h"
void FreeStack (Stack *S)//释放栈空间
{
    free(S->elements);
}

void MakeEmpty (Stack *S)//栈置空
{
    S->top=-1;
}

Bool IsStackEmpty (Stack * S)//判断栈是否为空
{
    return (Bool) (S->top==-1);
}

Bool IsStackFull (Stack *S)//判断栈是否为满
{
    return (Bool) (S->top==S->MaxSize-1);
}

void InitStack (Stack *S,int sz)//创建栈空间，生成一个空栈
{
    S->MaxSize=sz;
    S->elements=(ElementType3 * ) malloc(sizeof(ElementType3) * S->MaxSize);
    S->top=-1;
}

int Push (Stack * S, ElementType3 item)//压栈
{
    if (!IsStackFull(S))
    {
        S->elements[++(S->top)]=item;
        return 0;
    }
    else return -1;
}

ElementType3 Pop (Stack * S)//弹栈
{
    if (!IsStackEmpty(S))
        return S->elements[(S->top)--];
    else
    {
        printf("stack is empty!\n");
        exit(1);
    }
}

ElementType3 GetTop (Stack *S)//取栈顶的表目
{
    if (!IsStackEmpty(S))
        return S->elements[S->top];
    else
    {
        printf("stack is empty!\n");
        exit(1);
    }
}
