#include<stdio.h>
int main() {
    int a[100][100],i,j,k,inum,n,flag=0,flag2=0;
    scanf("%d",&inum);
    for(i=0; i<inum; i++) {
        scanf("%d",&n);
        for(j=0; j<n; j++)
            for(k=0; k<n; k++)
                scanf("%d",&a[j][k]);

        for(j=0; j<n/2; j++) {
            for(k=0; k<n; k++)
                if(a[j][k]!=a[n-1-j][k]) {
                    flag=1;
                    break;
                }
            if(flag==1) {
                break;
            }
        }
        for(j=0; j<n; j++)
            {
            for(k=0; k<n/2; k++)
                if(a[j][k]!=a[j][n-1-k]) {
                    flag2=1;
                    break;
                }
        if(flag2==1)
    break;}
        if(flag!=1&&flag2!=1)
        printf("yes\n");
        else printf("no\n");
flag=0;
flag2=0;
        }
    return 0;
}