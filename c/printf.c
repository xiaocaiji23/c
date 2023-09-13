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
    
    return 0;
}