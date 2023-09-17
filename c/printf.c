#include <stdio.h>
/*第一次测试定义
#define Q "his friends.\n"*/
int main(void)
{   /*第一次测试:printf输出字符串
    char a[] = "hi hello";
    scanf("%s", a);//遇到空格就停止输入,实际输入一个单词
    printf("%s%s", Q, a);*/
    /*第二次测试:scanf输入字符串(只输入一个单词)
    char a[] = "hi";//数组长度根据字符串长度(scanf输入的)变化,不是固定初始化变量的长度
    scanf("%s", a);
    printf("%s", a);*/
    /*第三次测试:scanf输入字符是%前空格的影响
    char a,b;
    scanf(" %c", &a);//%c前有空格,则从第一个非空格开始读入
    scanf("%c", &b); //%c前无空格,则从第一个开始读入(可以是空格)
    printf("带空格的:%c;不带空格的:%c", a, b);*/
    /*探究%*.*d的输出格式
    int a = 2;
    printf("%4.2d", a);//四位宽度,至少显示两位,输出(逗号后面的部分叫参数列表)  02*/
    //printf("\"你好\"");
    /*char a = 'A';
    int b = a;
    if (a= b)
    {
        printf("相等\n");
    }*/
    int a, b;
    if ((a,b)==b)
    {
        printf("相等\n");
    }
    
    return 0;
}