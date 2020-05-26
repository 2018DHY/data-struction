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
typedef int ElementType1;
struct linearList
{
    ElementType1 * data;
    int MaxSize;
    int Last;
};
typedef struct linearList LinearList;

void InitList(LinearList *L,int sz);
void FreeList(LinearList * L);
Bool ListEmpty(LinearList * L);
Bool ListFull(LinearList * L);
int ListLength(LinearList * L);
ElementType1 GetElem(LinearList * L, int i);
int LocateElem(LinearList * L, ElementType1 x);
Bool InsertElem(LinearList * L, ElementType1 x, int i);
Bool DeleteElem (LinearList * L, int i);
void printout (LinearList * L);
#endif /* list_h */
