//
//  list.h
//  Data struction
//
//  Created by HY D on 2020/3/28.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>
#include "ordinary.h"
typedef int ElementType;
struct linearList
{
    ElementType * data;
    int MaxSize;
    int Last;
};
typedef struct linearList LinearList;

void InitList(LinearList *L,int sz);
void FreeList(LinearList * L);
Bool ListEmpty(LinearList * L);
Bool ListFull(LinearList * L);
int ListLength(LinearList * L);
ElementType GetElem(LinearList * L, int i);
int LocateElem(LinearList * L, ElementType x);
Bool InsertElem(LinearList * L, ElementType x, int i);
Bool DeleteElem (LinearList * L, int i);
void printout (LinearList * L);
#endif /* list_h */
