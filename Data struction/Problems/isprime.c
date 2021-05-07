//
//  isprime.c
//  Data struction
//
//  Created by HY D on 2021/4/20.
//  Copyright © 2021 HY D. All rights reserved.
//

#include "isprime.h"
void isprime(){
    int p;
    int i=2;
    printf("please input a integral:");
    scanf("%d",&p);
    if(p==1){
        printf("1 is a primeNumber");
    }
    else if(p>1){
        while(i<p)
        {
            if(p%i==0){
                printf("this is not a prime number\n");
                break;
            }
            i++;
        }
        printf("this is a prime number\n");
    }
}
