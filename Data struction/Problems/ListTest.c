//
//  ListTest.c
//  Data struction
//
//  Created by HY D on 2020/4/2.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "ListTest.h"
void extern ListTest(void)
{
    LinearList * L= (LinearList * ) malloc(sizeof(LinearList));
    InitList(L, 5);
    InsertElem(L, 10, 0);
    InsertElem(L, 20, 0);
    InsertElem(L, 30, 0);
    InsertElem(L, 40, 0);
    InsertElem(L, 50, 0);
    if (InsertElem(L, 60, 0))
        printout(L);
    else if (ListFull(L))
        printf("List is full,failed to insert\n");
    printout(L);
    DeleteElem(L, 1);
    DeleteElem(L, 1);
    printf("After twice deletions the list is ");
    printout(L);
    printf("The location of data 20 is %d\n",LocateElem(L, 20));
    printf("The 3rd value is %d\n",GetElem(L, 2));
    FreeList(L);
}
