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
#include "Caculator.h"
#include "isprime.h"


int main() {
    // insert code here...
    int a;
    printf("Hallo world!\n");
    printf("1约瑟夫问题\t2线性表测试\t3个人测试\t4计算器\t5质数\n");
    scanf("%d",&a);
    
    switch (a)
    {
        case 1:Josephus();break;
        case 2:ListTest();break;
        case 3:test();break;
        case 4:Calculator();break;
        case 5:isprime();break;
    }
    return 0;
    
}
