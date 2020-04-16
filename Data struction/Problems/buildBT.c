//
//  buidBT.c
//  Data struction
//
//  Created by HY D on 2020/4/12.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "buildBT.h"
void extern test(void)
{
    char str[30];
    BinaryTree *b;
    b=(BinaryTree *)malloc(sizeof(BinaryTree));
    printf("Please inputing BTree:");
    scanf("%s",str);
    CreatBTree(b, str);
    PreOrder(b->root);
}
