//
//  list.c
//  Data struction
//
//  Created by HY D on 2020/3/28.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "list.h"
#include <stdlib.h>
void InitList(LinearList * L, int sz)
{
    if (sz > 0)
    {
        L->MaxSize=sz;
        L->Last=0;
        L->data=(ElementType * )malloc(sizeof(ElementType) * L->MaxSize);
    }
}

void FreeList(LinearList * L)
{free(L->data);}

Bool ListEmpty(LinearList * L)
{return (L->Last <= 0) ? TRUE : FALSE;}

Bool ListFull(LinearList * L)
{return (L->Last >= L->MaxSize) ? TRUE : FALSE;}

int ListLength(LinearList * L)
{return L->Last;}

ElementType GetElem(LinearList * L, int i)
{return (i<0||i>=L->Last) ? NULL : L->data[i];}

int LocateElem(LinearList * L,ElementType x)
{
    int i;
    for  (i=0; i<L->Last; i++)
        if(L->data[i] == x) return i;
    return -1;
}

Bool InsertElem (LinearList * L, ElementType x, int i)
{
    int j;
    if (i < 0 || i > L->Last||L->Last==L->MaxSize)
        return FALSE;
    else
    {
        for  (j=L->Last-1; j >= i; j--) L->data[j+1]=L->data[j];
        L->data[i]=x;
        L->Last++;
        return TRUE;
    }
}

Bool DeleteElem (LinearList * L, int i)
{
    int j;
    if (i < 0 ||i > L->Last|| L->Last==0)
        return FALSE;
    else
    {
        for (j=i;j < L->Last-1; j++)
            L->data[j]=L->data[j+1];
        L->Last--;
        return TRUE;
    }
}

void printout(LinearList * L)
{
    int i;
    for (i=0;i<L->Last;i++)
        printf("%d ",L->data[i]);
    printf("\n");
}
