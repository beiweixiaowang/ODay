#include <stdio.h>
int main ()
{
    int m, q;
    scanf("%d", &m);
    for(q=0; q<m; q++){
        int n,i,j,a=1,b=1,k;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            b=a;
            a=a+i;
            k=i+1;
            for(j=i; j<=n; j++)
            {
                if(j==n)
                {
                    printf("%d\n",b);
                }
                else
                {
                    printf("%d ",b);
                }
                b+=k;
                k++;
            }
        }
    }
        
    return 0;
}