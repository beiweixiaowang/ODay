
#include <stdio.h>
int main(){
    int n,sum=0,i,t,j,a,f,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        t=a;
        sum=0;
        while(t){
            sum+=t%10;
            t/=10;
        }
        f=sum;
        c=0;
        for(j=2;j<=9;j++){
            t=a*j;
            sum=0;
            while(t){
              sum+=t%10;
              t/=10;
            }
            if(sum==f) c++;
        }
        if(c==8) printf("%d\n",f);
        else     printf("NO\n");
    }
    return 0;
}
