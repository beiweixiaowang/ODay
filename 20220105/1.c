#include <stdio.h>
#include <string.h>
#include <math.h>
void nixu(char *a);
 
int main()
{
    char a[101], b[101], c[101], *pa; //a是原数组，b用来进行比较，c用来保留a的原型
    int i, n, count;                  //n存放字符串长度，count代表魔镜做了几次
    while(scanf("%s", a) != -1)       //按照提议输入字符串，处理到文件尾
    {
        strcpy(c, a);                 //把a复制给c备用
        strcpy(b, a);                 //把a复制给b比较
        count = 0;                    //给count赋初值
        while(strcmp(a,b) == 0)       //当a和b字符串相等时，循环继续
        {
                n = strlen(a);        //求出字符串长度
                pa = a+n/2;           //找到指针pa从a字符数组中间截断的位置
                strcpy(b, pa);        //把从pa位置以后的字符串复制到b字符数组上
                *pa = '\0';           //再给a字符数组前半段加上结束标志
                nixu(b);              //调取函数逆序摆放b
                count++;              //计数加一，循环结束count会多加一次
        }
        int q = pow(2,count - 1);     //用减半的次数来算出长度的倍数
        printf("%d\n",strlen(c)/q);   //用总长度减去倍数，就得到了最短长度
    }
 
}
void nixu(char *a)                    //逆序字符数组的函数，之前的题有出现过
{
    int n = strlen(a);
    char *pa, *pb;
    for(pa = a, pb = a+n-1; pa < pb; pa++,pb--)
    {
        char m = *pa;
        *pa = *pb;
        *pb = m;
    }
}