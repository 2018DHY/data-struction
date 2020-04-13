//
//  CMyString.h
//  Data struction
//
//  Created by HY D on 2020/3/28.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef CMyString_h
#define CMyString_h

#include <stdio.h>
#define MAX_STRING_SIZE 1024
struct cMyString
{
    int length;
    char str[MAX_STRING_SIZE +1 ];
};

typedef struct cMyString CMyString;
void InitCMyString(CMyString * ,char * s );/*s初始化函数，构造一个字符指针所指的串*/
void Concatenate(CMyString * , CMyString * s);/*将字符串s附加到本字符串之后*/
void InsertS (CMyString * ,int pos, CMyString * s );/*将字符串s插入到文本字符串pos所指向的位置*/
void DeleteS (CMyString *, int pos , CMyString * s );/*删除从pos位置起的连续len个字符*/
CMyString SubString(CMyString *, const int pos, const int len);/*提取一个子串，从pos位置起长度为len的字符*/
char * GetString(CMyString * );//获取本字符串
int Find(CMyString * , CMyString * s);//在本字符串中查找字符串s首次出现的位置，如果不包含s则返回0


#endif /* CMyString_h */
