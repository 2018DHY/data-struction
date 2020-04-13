//
//  main.c
// Data strunction
//
//  Created by HY D on 2020/3/6.
//  Copyright © 2020 HY D. All rights reserved.
//

#include <stdio.h>
#include "Josephus.h"
#include "ListTest.h"
#include "buildBT.h"


int main() {
    // insert code here...
    int a;
    printf("Hallo world!\n");
    printf("1约瑟夫问题\t2线性表测试\t3个人测试\n");
    scanf("%d",&a);
    
    switch (a)
    {
        case 1:Josephus();break;
        case 2:ListTest();break;
        case 3:test();break;
    }
    return 0;
}
