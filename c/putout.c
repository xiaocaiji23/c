#include <stdio.h>
#define SPACE ' ' // SPACE表⽰单引号-空格-单引号
int main(void)
{
    char ch;
    ch = getchar();    // 读取⼀个字符
    while (ch != '\n') // 当⼀⾏未结束时
    {
        if (ch == SPACE) // 留下空格
            putchar(ch); // 该字符不变
        else
            putchar(ch + 1); // 改变其他字符
        ch = getchar();      // 获取下⼀个字符
    }
    putchar(ch); // 打印换⾏符
    return 0;
}
