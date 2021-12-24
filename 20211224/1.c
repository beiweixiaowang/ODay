#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[1001];
    int b[10]={0};
    scanf("%s", &a);
    int t, l = strlen(a);

    for (int i = 0; i < l; i++)
    {
        t = a[i] - 48;
        b[t]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (b[i] != 0)
        {
            printf("%d:%d\n", i, b[i]);
        }
        
    }
    return 0;
}