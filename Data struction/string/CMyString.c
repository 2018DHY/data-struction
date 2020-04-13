//
//  CMyString.c
//  Data struction
//
//  Created by HY D on 2020/3/28.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "CMyString.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void InitCMyString(CMyString * CS, char * s)
{
    char * p1, * p2;
    for (CS->length = 0, p1=CS->str, p2= (char *)s; *p2; CS->length++)
        * p1++= *p2++;
    *p1=0;
}

void Concatenate(CMyString *CS, CMyString *s)
{
    if(CS->length+s->length<=MAX_STRING_SIZE)
    {
        memcpy(CS->str+CS->length,s->str, s->length+1);
        CS->length+=s->length;
    }
    else printf("error: string length overflow!\n");
}

void DeleteCS(CMyString * CS, int pos, int len)
{
    int rlen = len;
    if (pos + rlen > CS->length)
        rlen=CS->length-pos;
    CS->length-=rlen;
    memchr(CS->str+pos, CS->str+pos+rlen, CS->length-pos+1);
}

char * GetString(CMyString * CS)
{
    char * tmpStr = (char *)malloc(sizeof(char)*(CS->length+1));
    memcpy(tmpStr,CS->str, CS->length+1);
    return tmpStr;
}

void Insert(CMyString * CS, int pos, CMyString * s )
{
    if (CS->length+s->length <= MAX_STRING_SIZE)
    {
        memcpy(CS->str+pos+s->length,CS->str+pos,CS->length-pos+1);
        memcpy(CS->str+pos,s->str,s->length);
        CS->length+=s->length;
    }
    else
        printf("error: string length overflow!\n");
}

CMyString SubString(CMyString * CS,const int pos, const int len)
{
    int rlen = len;
    CMyString * tmpStr = (CMyString * ) malloc(sizeof(CMyString));
    InitCMyString(tmpStr, " ");
    if (pos+len > CS->length)
        rlen=CS->length-pos;
    memcpy(tmpStr->str,CS->str+pos,rlen);
    tmpStr->length=rlen;
    tmpStr->str[tmpStr->length]=0;
    return * tmpStr;
}

void GenKMPNext(int * next, CMyString * s)
{
    int i=0,j=-1;
    next[0]=-1;
    while (i<s->length-1)
    {
        j=next[j];
        i++;j++;
        if(s->str[i]==s->str[j])
            next[i]=next[j];
        else next[i]=j;
    }
}

int Find(CMyString * CS,CMyString * s)
{
    int i, j , * next=(int *)malloc(sizeof(int) * s->length);
    GenKMPNext(next, s);
    for(i=0, j=0;i<s->length && j<CS->length;)
    {
        if(s->str[i]==CS->str[j])
        {i++;j++;}
        else if (next[i]>=0)
            i=next[i];
        else {i=0;j++;}
    }
    if(i>=s->length)
        return j-s->length;
    else
        return -1;
}
