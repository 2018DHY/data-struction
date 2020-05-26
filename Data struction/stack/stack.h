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
typedef int ElementType3;


struct stack
{
    int top;
    ElementType3 * elements;
    int MaxSize;
};
typedef struct stack Stack;

void InitStack(Stack *,int sz); //创建栈空间，生成一个空栈
void FreeStack(Stack *);//释放栈空间
int Push(Stack * ,ElementType3);//压栈
ElementType3 Pop(Stack *);//弹栈
ElementType3 GetTop(Stack *);//取栈顶的表目
void MakeEmpty(Stack *);//栈置空
Bool IsStackEmpty(Stack * S);//判断栈是否为空
Bool IsStackFull(Stack *S);//判断栈是否为满
#endif /* stack_h */
