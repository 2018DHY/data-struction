//
//  Josephus.c
//  Data struction
//
//  Created by HY D on 2020/4/1.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "Josephus.h"
void extern Josephus(void)
{
    LinearList * P=(LinearList * )malloc(sizeof(LinearList));
    int n,s,m,i,j=0;
    printf("please input n=");
    scanf("%d",&n);
    printf("please input s=");
    scanf("%d",&s);
    printf("please input m=");
    scanf("%d",&m);
    InitList(P, n);
    for( i = 0;i < n;i++)
        InsertElem(P, ++j, i);
    i=s-1;
    while(P->Last)
    {
        i=(i+m-1)%P->Last;
        printf("%d ",P->data[i]);
        DeleteElem(P, i);
    }
    FreeList(P);
}
/*i是用来赋值和当伪指针用的*/
