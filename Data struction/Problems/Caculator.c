//
//  Caculator.c
//  Data struction
//
//  Created by HY D on 2020/4/17.
//  Copyright © 2020 HY D. All rights reserved.
//

#include "Caculator.h"
void Calculator(void)
{
    Stack* number=(Stack *)malloc(sizeof(Stack));
    Stack* badge=(Stack *)malloc(sizeof(Stack));
    int i=0,j=0,k=0;//中间值，保存即将被销毁的数值
    char ch=0;
    InitStack(number, 20);
    InitStack(badge, 20);
    char a[30];//缓冲区
    printf("please input fomulation:");
    scanf("%s",a);
    ch=a[0];
    while(ch!='\0')
{
        switch(ch)
    {
            case '+':
        {
            if(badge->elements[badge->top]=='('||badge->top==-1)
                Push(badge,ch);
            else if(badge->elements[badge->top]=='*')
            {
                i=number->elements[number->top];//靠后的值
                Pop(number);
                j=number->elements[number->top];//靠前的值
                Pop(number);
                Push(number, i*j);
                Pop(badge);
                Push(badge, ch);
            }
            else if(badge->elements[badge->top]=='/')
            {
                i=number->elements[number->top];//靠右的值
                Pop(number);
                j=number->elements[number->top];//靠左的值
                Pop(number);
                Push(number, j/i);
                Pop(badge);
                Push(badge, ch);
            }
            else if(badge->elements[badge->top]=='-')
            {
                i=number->elements[number->top];//靠右的值
                Pop(number);
                j=number->elements[number->top];//靠左的值
                Pop(number);
                Push(number, j-i);
                Pop(badge);
                Push(badge, ch);
            }
            else
            {
                i=number->elements[number->top];//靠后的值
                Pop(number);
                j=number->elements[number->top];//靠前的值
                Pop(number);
                Push(number, i+j);
                Pop(badge);
                Push(badge, ch);
            }
        }
        break;
            case '-':
            {
                if(badge->elements[badge->top]=='('||badge->top==-1)
                    Push(badge,ch);
                else if(badge->elements[badge->top]=='*')
                {
                    i=number->elements[number->top];//靠后的值
                    Pop(number);
                    j=number->elements[number->top];//靠前的值
                    Pop(number);
                    Push(number, i*j);
                    Pop(badge);
                    Push(badge, ch);
                }
                else if(badge->elements[badge->top]=='/')
                {
                    i=number->elements[number->top];//靠右的值
                    Pop(number);
                    j=number->elements[number->top];//靠左的值
                    Pop(number);
                    Push(number, j/i);
                    Pop(badge);
                    Push(badge, ch);
                }
                else if(badge->elements[badge->top]=='-')
                {
                    i=number->elements[number->top];//靠右的值
                    Pop(number);
                    j=number->elements[number->top];//靠左的值
                    Pop(number);
                    Push(number, j-i);
                    Pop(badge);
                    Push(badge, ch);
                }
                else
                {
                    i=number->elements[number->top];//靠后的值
                    Pop(number);
                    j=number->elements[number->top];//靠前的值
                    Pop(number);
                    Push(number, i+j);
                    Pop(badge);
                    Push(badge, ch);
                }
                
            }
            break;
                case '*':
                {
                    if(badge->elements[badge->top]=='('||badge->top==-1)
                        Push(badge,ch);
                    else if(badge->elements[badge->top]=='*')
                    {
                        i=number->elements[number->top];//靠后的值
                        Pop(number);
                        j=number->elements[number->top];//靠前的值
                        Pop(number);
                        Push(number, i*j);
                        Pop(badge);
                        Push(badge, ch);
                    }
                    else if(badge->elements[badge->top]=='/')
                    {
                        i=number->elements[number->top];//靠右的值
                        Pop(number);
                        j=number->elements[number->top];//靠左的值
                        Pop(number);
                        Push(number, j/i);
                        Pop(badge);
                        Push(badge, ch);
                    }
                    else if(badge->elements[badge->top]=='+'||badge->elements[badge->top]=='-')
                    {
                        Push(badge, ch);
                    }
                }
            break;
                case '/':
                {
                    if(badge->elements[badge->top]=='('||badge->top==-1)
                        Push(badge,ch);
                    else if(badge->elements[badge->top]=='*')
                    {
                        i=number->elements[number->top];//靠后的值
                        Pop(number);
                        j=number->elements[number->top];//靠前的值
                        Pop(number);
                        Push(number, i*j);
                        Pop(badge);
                        Push(badge, ch);
                    }
                    else if(badge->elements[badge->top]=='/')
                    {
                        i=number->elements[number->top];//靠右的值
                        Pop(number);
                        j=number->elements[number->top];//靠左的值
                        Pop(number);
                        Push(number, j/i);
                        Pop(badge);
                        Push(badge, ch);
                    }
                    else if(badge->elements[badge->top]=='+'||badge->elements[badge->top]=='-')
                    {
                        Push(badge, ch);
                    }
                    
                }
            break;
                case ')':
                {
                    if(badge->elements[badge->top]=='+')
                    {
                        i=number->elements[number->top];//靠右的值
                        Pop(number);
                        j=number->elements[number->top];//靠左的值
                        Pop(number);
                        Push(number, j+i);
                        Pop(badge);
                        Pop(badge);
                    }
                    else if(badge->elements[badge->top]=='-')
                    {
                        i=number->elements[number->top];//靠右的值
                        Pop(number);
                        j=number->elements[number->top];//靠左的值
                        Pop(number);
                        Push(number, j-i);
                        Pop(badge);
                        Pop(badge);
                    }
                    else if(badge->elements[badge->top]=='*')
                    {
                        i=number->elements[number->top];//靠后的值
                        Pop(number);
                        j=number->elements[number->top];//靠前的值
                        Pop(number);
                        Push(number, i*j);
                        Pop(badge);
                        Pop(badge);
                    }
                    else if(badge->elements[badge->top]=='/')
                    {
                        i=number->elements[number->top];//靠右的值
                        Pop(number);
                        j=number->elements[number->top];//靠左的值
                        Pop(number);
                        Push(number, j/i);
                        Pop(badge);
                        Pop(badge);
                    }
                }
            break;
                case '(':
                    {
                        Push(badge, ch);
                    }
            break;
                case '=':
                    {
                        while(badge->top!=-1)
                        {
                            if(badge->elements[badge->top]=='+')
                            {
                                i=number->elements[number->top];//靠后的值
                                Pop(number);
                                j=number->elements[number->top];//靠前的值
                                Pop(number);
                                Push(number, i+j);
                                Pop(badge);
                            }
                            else if(badge->elements[badge->top]=='*')
                                           {
                                               i=number->elements[number->top];//靠后的值
                                               Pop(number);
                                               j=number->elements[number->top];//靠前的值
                                               Pop(number);
                                               Push(number, i*j);
                                               Pop(badge);
                                           }
                                           else if(badge->elements[badge->top]=='/')
                                           {
                                               i=number->elements[number->top];//靠右的值
                                               Pop(number);
                                               j=number->elements[number->top];//靠左的值
                                               Pop(number);
                                               Push(number, j/i);
                                               Pop(badge);
                                           }
                                           else if(badge->elements[badge->top]=='-')
                                           {
                                               i=number->elements[number->top];//靠右的值
                                               Pop(number);
                                               j=number->elements[number->top];//靠左的值
                                               Pop(number);
                                               Push(number, j-i);
                                               Pop(badge);
                                           }
                            }
                    }
            break;
            
            
            
            
            default:
            Push(number, ch-48);
    }
    ch=a[++k];
}
    printf("%d",number->elements[number->top]);
}

